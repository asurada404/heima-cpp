#include <iostream>
using namespace std;

/*
������ֵ���ݺ͵�ַ����
*/

void swap(int a, int b) {
	int tmp = 0;
	tmp = a;
	a = b;
	b = a;

}

void swap2(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main77() {
	int a = 10, b = 100;
	cout << "a: " << a << " b: " << b << endl;
	swap(a, b);
	cout << "a: " << a << " b: " << b << endl;
	swap2(&a, &b);
	cout << "a: " << a << " b: " << b << endl;
	// �ܽ᣺��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����
	return 0;
}