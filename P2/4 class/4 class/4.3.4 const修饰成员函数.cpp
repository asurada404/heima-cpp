#include <iostream>
using namespace std;

// this ָ��ı�����ָ�볣���� ClassName * const this; ָ�볣����ָ��Ķ����ǲ����޸ĵģ�ָ��Ķ����ֵ�ǿ����޸ĵģ�

class Computer {
public:
	Computer(){
		this->a = 0;
		this->b = 10;
	}
	void show_info() const{ // const Computer* const this;
		// a = 10;
		b = 20;
		cout << "a: " << a << " b: " << b << endl;
	}
	void func() {
		this->a = 111;
	}
public:
	int a;
	mutable int b;
};

int main434() {
	int a = 10;
	int b = 20;
	int* const p = &a;  //ָ�볣�� ָ���ǳ��� ָ���ܸı�
	*p = 20;
	// p = &b;
	const int* p2 = &a; // ����ָ��, ������ָ��  ����ͨ��ָ��ı�ָ������ֵ��ָ��Ķ�����Ըı�
	p2 = &b; 
	// *p2 = 20;

	Computer c1;
	c1.show_info();

	const Computer c2;
	c2.show_info();
	// c2.func(); // ������ֻ�ܵ��ó�����
	c2.b = 1000; //��������� mutable�� member variable

	return 0;
}