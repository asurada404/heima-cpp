#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Person {

public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void show() {
		cout << "My name is " << this->name << " , my age is : " << this->age <<endl;
	}
public:
	string name;
	int age;
};


void test252() {
	vector<Person> v;
	Person p1("jack", 11);
	Person p2("kathy", 12);
	Person p3("wo", 33);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		it->show();
	}
}


void test2521() {
	vector<Person*> v;
	Person p1("jack", 11);
	Person p2("kathy", 12);
	Person p3("wo", 33);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		(*it)->show();
	}
}

int main252() {
	test252();
	test2521();
	return 0;
}