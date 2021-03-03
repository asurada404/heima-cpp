#pragma once
#include <iostream>
using namespace std;

class Dog {

public:
	int c_age;

public:
	// 无参数
	Dog() {
		std::cout << "call Dog()" << std::endl;
	}
	
	Dog(int age) {
		c_age = age;
		std::cout << "call Dog(int age)" << std::endl;
	}

	// 拷贝构造函数
	Dog(const Dog& d) {
		c_age = d.c_age;
		std::cout << "call Dog(const Dog& d)" << std::endl;
	}
	~Dog() {
		std::cout << "call ~Dog()" << std::endl;
	}
};


