#include <iostream>
#include <string>
using namespace std;


class Calculator {
public:
	double m_a;
	double m_b;
public:
/*
	Calculator(double a, double b) {
		this->m_a = a;
		this->m_b = b;
	}
*/
	virtual double get_result() {
		return 0;
	}
};

// add
class Add1 : public Calculator{
public:
	virtual double get_result() {
		return this->m_a + this->m_b;
	}
};

// minus
class Minus : public Calculator {
public:
	virtual double get_result() {
		return this->m_a - this->m_b;
	}
};

// multiply
class Multiply : public Calculator {
public:
	virtual double get_result() {
		return this->m_a * this->m_b;
	}
};



int main472() {

	Add1 add;
	add.m_a = 100;
	add.m_b = 20;
	cout << add.get_result() << endl;

	Calculator* cal = new Add1;
	cal->m_a = 100;
	cal->m_b = 200;
	cout << cal->get_result() << endl;
	delete cal;

	cal = new Multiply;
	cal->m_a = 100;
	cal->m_b = 200;
	cout << cal->get_result() << endl;
	delete cal;






	return 0;
}