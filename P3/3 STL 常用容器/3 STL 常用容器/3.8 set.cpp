#include <iostream>
#include <set>
#include <string>

using namespace std;


void show_set(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}


void show_mset(multiset<int>& s) {
	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

void test381() {
	set<int> s1;
	s1.insert(1);
	s1.insert(100);
	s1.insert(10);
	show_set(s1);

	set<int> s2(s1);
	show_set(s2);

	set<int> s3;
	s3 = s2;
	show_set(s3);
	cout << "s1 size:" << s1.size() << endl;
	cout << "s1 empty : " << s1.empty() << endl;

	
	set<int> s4(s3.begin(), --s3.end());
	show_set(s4);
	s3.swap(s4);
	show_set(s3);
	s4.insert(1000);
	show_set(s4);
	s4.erase(1);
	show_set(s4);
	set<int>::iterator res = s4.find(1000);
	if (res != s4.end()) {
		cout << *res << endl;
	}
	else {
		cout << "not found" << endl;
	}

	int num = s4.count(1000);
	cout << "num: " << num << endl;
	num = s4.count(111);
	cout << "num: " << num << endl;

	pair<set<int>::iterator, bool > r =  s4.insert(1111);
	cout << *r.first << endl;
	cout << r.second << endl;
}


void test386() {
	set<int> s1;
	s1.insert(100);
	s1.insert(100);
	s1.insert(11);
	show_set(s1);
	multiset<int> ms1;
	ms1.insert(10);
	ms1.insert(10);
	ms1.insert(10);
	show_mset(ms1);

}

void test387() {
	pair<string, int> p("liu", 123);
	pair<string, int> p2 = make_pair("tony", 112);
	cout << "name: " << p.first << ", age: " << p.second << endl;
	cout << "name: " << p2.first << ", age: " << p2.second << endl;

}

class MyCompare
{
public:
	bool operator()(int v1, int v2)const {
		return v1 > v2;
	}
};



void test388() {
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}


class Dog {
public:
	string name;
	int age;
public:
	Dog(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

class DogCompare {
public:
	bool operator()(const Dog& d1, const Dog& d2)const {
		return d1.age < d2.age;
	}

};

void test3882() {
	set<Dog, DogCompare> s1;
	Dog d1("jack", 11);
	Dog d2("jack2", 12);
	Dog d3("jac2k", 31);
	s1.insert(d1);
	s1.insert(d2);	
	s1.insert(d3);
	for (set<Dog, DogCompare>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << "name: " << it->name << " ,\t age: " << it->age << endl;
	}






}
int main38() {
	//test381();
	//test386();
	//test387();
	//test388();
	test3882();
	return 0;
}