#include <iostream>
using namespace std;

int func(int a, int b = 15, int c = 10) {
	return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	// ������������Ĭ��ֵ��������ʵ�־Ͳ�����Ĭ��ֵ
	return a + b;
}

int main31() {
	int a = 10;
	int b = 20;
	int c = 30;
	cout << func(a, b, c) << endl;
	cout << func(a) << endl;

	cout << func2(10, 20) << endl;
	cout << func2() << endl;

	return 0;
}