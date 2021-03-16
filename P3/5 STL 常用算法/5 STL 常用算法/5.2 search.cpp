#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// find
void test521() {
	vector<int> v;
	for (int i = 0; i < 1000; i++) {
		v.push_back(rand() % 100);
	}
	vector<int>::iterator pos = find(v.begin(), v.end(), 10);
	if (pos != v.end()) {
		cout << "found it ";
		cout << *pos << endl;
	}
	else {
		cout << "not found." << endl;
	}
}


//普通函数
bool greate_five(int val) {
	return val > 5;
}

// 函数对象
class GreateFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};


class Person {
public:
	string name;
	int age;
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

class Greate20 {
public:
	bool operator()(Person& p) {
		return p.age > 20;
	}
};


// find if
void test522() {
	vector<int> v;
	for (int i = 0; i < 1000; i++) {
		v.push_back(rand() % 100);
	}
	vector<int>::iterator pos = find_if(v.begin(), v.end(), greate_five);
	if (pos != v.end()) {
		cout << "found it ";
		cout << *pos << endl;
	}
	else {
		cout << "not found." << endl;
	}
}

void test5222() {
	Person p1("jack", 20);
	Person p2("jack1", 21);
	Person p3("jack2", 22);
	Person p4("jack3", 23);
	vector<Person> p_lst;
	p_lst.push_back(p1);
	p_lst.push_back(p2);
	p_lst.push_back(p3);
	p_lst.push_back(p4);
	vector<Person>::iterator pos = find_if(p_lst.begin(), p_lst.end(), Greate20());
	if (pos != p_lst.end()) {
		cout << "name: " <<pos->name << ", age: " <<pos->age << endl;
	}
	else {
		cout << "not found" << endl;
	}
}

void test523() {
	vector<int> v_lst;
	v_lst.push_back(1);
	v_lst.push_back(11);
	v_lst.push_back(12);
	v_lst.push_back(12);
	v_lst.push_back(13);

	for (vector<int>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;

	vector<int>::iterator  pos = adjacent_find(v_lst.begin(), v_lst.end());
	if (pos != v_lst.end()) {
		while (pos != v_lst.end()) {
			cout << *pos++ << endl;
		}
	}
	else {
		cout << "not found" << endl;
	}

}


// binary search
// 有序列的容器才可以用 vector deque stack queue list 
// set map
void test524() {
	vector<int> v_lst;
	for(int i = 0; i < 10; i++) {
		v_lst.push_back(i);
	}
	bool res = binary_search(v_lst.begin(), v_lst.end(), 5);
	if (res) {
		cout << "found it" << endl;
	}
	else {
		cout << "not found " << endl;
	}

}

// count
void test525() {
	vector<int> v_lst;
	for (int i = 0; i < 1000; i++) {
		v_lst.push_back(rand()%50);
	}
	int num = count(v_lst.begin(), v_lst.end(), 10);
	cout << " num of 10 : " << num << endl;

	int cond_num = count_if(v_lst.begin(), v_lst.end(), GreateFive());
	cout << " cond_num of 10 : " << cond_num << endl;
}

int main52() {
	//test521();
	//test522();
	//test5222();
	//test523();
	//test524();
	test525();
	return 0;
}