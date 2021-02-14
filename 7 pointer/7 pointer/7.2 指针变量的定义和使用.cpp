#include <iostream>
using namespace std;

int main72() {
	/*
	1. 引用 & 
	2. 解引用 *
	& 提取变量的地址
	* 获取指针所指地址的内容
	*/
	int a = 10;
	int* p = &a;
	cout << "a: " << a << endl;
	cout << "p: " << p << endl;
	cout << "&a: " << &a << endl;
	cout << "*p: " << *p << endl;
	return 0;
}