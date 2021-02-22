#include <iostream>
using namespace std;

int main22() {

	// 引用必须初始化，且初始化之后不能修改,指向的内存的位置不能修改

	int a = 10;
	int b = 20;
	int& c = a;
	c = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}