#include <iostream>
using namespace std;

int main22() {

	// ���ñ����ʼ�����ҳ�ʼ��֮�����޸�,ָ����ڴ��λ�ò����޸�

	int a = 10;
	int b = 20;
	int& c = a;
	c = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}