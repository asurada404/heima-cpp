#include <iostream>
using namespace std;

int main73() {
	/*
	4个字节，16进制的数字，
	*/
	int a = 10;
	int* p;
	p = &a;

	cout << "*p: " << *p << endl;
	cout << "p: " << p << endl;
	cout << "sizeof(p)" << sizeof(p) << endl;
	cout << "sizeof(float *): " << sizeof(float*) << endl;
	cout << "sizeof(int *): " << sizeof(int *) << endl;
	cout << "sizeof(double *): " << sizeof(double *) << endl;
	return 0;
}