#include <iostream>
using namespace std;

int main74() {
	// ��ָ��
	int* p = NULL;
	cout << "p: " << p << endl;
	// cout << "*p" << *p << endl; ���ʿ�ָ���ǲ��е�

	// Ұָ��
	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int a = 10;
	cout << &a << endl;
	//int* p2 = (int*)00CFFCFA;
	return 0;

}