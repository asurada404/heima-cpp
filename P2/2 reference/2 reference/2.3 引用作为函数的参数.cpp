#include <iostream>

using namespace std;

// ֵ����
void swap01(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

// ��ַ����
void swap02(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

// ���ô���
void swap03(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

}

int mai23() {
	int a = 10;
	int b = 100;

	cout << "a = " << a << ", b = " << b << endl;
	swap01(a, b);

	cout << "after swap01  a = " << a << ", b = " << b << endl;
	swap02(&a, &b);

	cout << "after swap02  a = " << a << ", b = " << b << endl;
	swap03(a, b);
	cout << "after swap03  a = " << a << ", b = " << b << endl;
	
	// ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨�������

	return 0;
}