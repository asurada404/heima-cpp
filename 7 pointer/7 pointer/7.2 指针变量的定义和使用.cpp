#include <iostream>
using namespace std;

int main72() {
	/*
	1. ���� & 
	2. ������ *
	& ��ȡ�����ĵ�ַ
	* ��ȡָ����ָ��ַ������
	*/
	int a = 10;
	int* p = &a;
	cout << "a: " << a << endl;
	cout << "p: " << p << endl;
	cout << "&a: " << &a << endl;
	cout << "*p: " << *p << endl;
	return 0;
}