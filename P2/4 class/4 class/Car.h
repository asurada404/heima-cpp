#pragma once
#include <iostream>
using namespace std;

class Car
{
public:
	int size;
public:
	void set_size(int size) {
		// this �����βκͳ�Ա����
		this->size = size;
	}
	int get_size() {
		return this->size;
	}
	// this ���ض�����
	Car& add_size(const Car& c) {
		this->size += c.size;
		return *this;
	}
};

