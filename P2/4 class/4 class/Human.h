#pragma once
#include <iostream>
#include "Phone.h"
using namespace std;
class Human
{
public:
	int age;
	double* height;
	Phone phone;
public:
	Human() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	Human(int a_age, double h_height) {
		cout << "�в����Ĺ��캯��" << endl;
		age = a_age;
		height = new double(h_height);
	}
	Human(const Human& h) {
		age = h.age;
		height = new double(*h.height);

	}

	~Human() {
		if (!height == NULL) {
			delete height;
			height = NULL;
		};
	}
	void set_phone(Phone a_phone) {
		phone = a_phone;
	}
};

