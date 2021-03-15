#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

class Human {
public:
	string name;
	int age;
	double height;
public:
	Human(string name, int age, double height) {
		this->name = name;
		this->age = age;
		this->height = height;
	}
};


void create_human_lst(list<Human>& h_lst) {
	string name_pre = "ABCD";
	for (int i = 0; i < name_pre.size(); i++) {
		string name = "can_";
		name += name_pre[i];
		int age = rand() % 100 + 1;
		double height = rand() % 81 + 100.0;
		Human h(name, age, height);
		h_lst.push_back(h);
	}
}

void show_human_lst(list<Human>& h_lst) {
	for (list<Human>::iterator it = h_lst.begin(); it != h_lst.end(); it++) {
		cout << "name: " << it->name << " , age: " << it->age << " , height: " << it->height << endl;
	}
}

bool compare_human(Human& h1, Human& h2) {
	if (h1.age == h2.age) {
		return h1.height > h2.height;
	}
	else {
		return h1.age < h2.age;
	}
}

void show_lst(list<int>& lst) {
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}


void test372() {
	list<int> lst;
	for (int i = 0; i < 10; i++) {
		lst.push_back(i);
	}
	show_lst(lst);
	list<int> lst2(4, 12);
	show_lst(lst2);

	list<int> lst3(lst);
	show_lst(lst3);

	list<int> lst4(lst.begin(), --lst.end());
	show_lst(lst4);
}


void test373() {
	list<int> lst;
	for (int i = 0; i < 10; i++) {
		lst.push_back(i);
	}
	show_lst(lst);

	list<int> lst2;
	for (int i = 0; i < 10; i++) {
		lst2.push_back(10-i);
	}
	show_lst(lst2);
	lst.swap(lst2);
	show_lst(lst);
	show_lst(lst2);
	list<int> lst3;
	lst3.assign(10, 1000);
	show_lst(lst3);
	list<int> lst4;
	lst4.assign(lst3.begin(), lst3.end());
	show_lst(lst4);
	lst2.reverse();
	show_lst(lst2);
	lst2.sort();
	show_lst(lst2);
}

void test378() {
	list<Human> lst;
	create_human_lst(lst);
	show_human_lst(lst);
	lst.sort(compare_human);
	show_human_lst(lst);
}

int main37() {
	//test372();
	//test373();
	test378();
	return 0;
}