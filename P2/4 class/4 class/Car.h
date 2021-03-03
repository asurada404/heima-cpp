#pragma once
#include <iostream>
using namespace std;

class Car
{
public:
	int size;
public:
	void set_size(int size) {
		// this 区别形参和成员变量
		this->size = size;
	}
	int get_size() {
		return this->size;
	}
	// this 返回对象本身
	Car& add_size(const Car& c) {
		this->size += c.size;
		return *this;
	}
};

