#include <iostream>
using namespace std;


// ���õı�����c++�ڲ�ʵ����һ��ָ�볣��.
int main25() {

	// ָ�볣��  �����޸�ֵ ���ǲ����޸�ָ��
	int a = 10;
	int b = 10;
	int* const p1 = &a;
	*p1 = 100;
	// p1 = &b;
	int& r1 = a;

	// ����ָ��
	const int* p2 = &a;
	// *p2 = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "p1 = " << *p1 << endl;
	cout << "p2 = " << *p2 << endl;
	cout << "a = " << a << endl;
	cout << "r1 = " << r1 << endl;

	return 0;
}