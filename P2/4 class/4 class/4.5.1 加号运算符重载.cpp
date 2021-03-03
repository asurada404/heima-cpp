#include <iostream>
using namespace std;

class Pad {
public:
	Pad() {};
	Pad(int a, int b) {
		this->m_a = a;
		this->m_b = b;
	};
	Pad operator+(const Pad& p) {
		Pad tmp;
		tmp.m_a = this->m_a + p.m_a;
		tmp.m_b = this->m_b + p.m_b;
		return tmp;
	};



public:
	int m_a;
	int m_b;
};


// 运算符重载 发生重载函数,
// 全局函数，不能是成员函数？
Pad operator+(const Pad& p, int val) {
	Pad tmp;
	tmp.m_a = p.m_a + val;
	tmp.m_b = p.m_b + val;
	return tmp;

};

int main451() {
	Pad p1(10,20);
	Pad p2(11, 22);
	Pad p3 = p1 + p2;
	cout << "p3 m_a:  " << p3.m_a << "; p3 m_b:  "<< p3.m_b << endl;
	Pad p4 = p3 + 100;
	cout << "p4 m_a:  " << p4.m_a << "; p4 m_b:  " << p4.m_b << endl;


	return 0;
}