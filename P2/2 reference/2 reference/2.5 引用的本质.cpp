#include <iostream>
using namespace std;


// 引用的本质在c++内部实现是一个指针常量.
int main25() {

	// 指针常量  可以修改值 但是不能修改指向
	int a = 10;
	int b = 10;
	int* const p1 = &a;
	*p1 = 100;
	// p1 = &b;
	int& r1 = a;

	// 常量指针
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