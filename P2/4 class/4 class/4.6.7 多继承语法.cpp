#include <iostream>
using namespace std;

class Bike1 {
public:
	int m_a;
public:
	Bike1() {
		m_a = 100;
	}
};

class Bike2 {
public:
	int m_a;
public:
	Bike2() {
		m_a = 2021;
	}
};

class SubBike :public Bike1, public Bike2 {
public:
	int m_c;
public:
	SubBike() {
		m_c = 10;
	}
};




int main467() {

	SubBike sb;
	cout << sb.Bike1::m_a << endl;
	cout << sb.Bike2::m_a << endl; //两个爸爸都有m_a，需要加作用域
	return 0;
}