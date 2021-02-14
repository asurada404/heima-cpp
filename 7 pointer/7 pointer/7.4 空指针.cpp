#include <iostream>
using namespace std;

int main74() {
	// 空指针
	int* p = NULL;
	cout << "p: " << p << endl;
	// cout << "*p" << *p << endl; 访问空指针是不行滴

	// 野指针
	//指针变量p指向内存地址编号为0x1100的空间
	int a = 10;
	cout << &a << endl;
	//int* p2 = (int*)00CFFCFA;
	return 0;

}