#pragma once
#include <iostream>
#include <string>
using namespace std;

class Man
{
public:
	std::string name;
	int age;
	int height;

public:
	Man(std::string a_name, int a_age, int a_height) : name(a_name), age(a_age), height(a_height)
		{
	}
	void show_info() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
		cout << "height: " << height << endl;

	}
};


