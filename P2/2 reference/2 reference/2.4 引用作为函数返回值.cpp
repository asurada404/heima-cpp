#include <iostream>
using namespace std;

int& test01() {
	int a = 10;
	return a;
}

int& test02() {
	static int a = 20;
	return a;
}


int main24() {

	int& ref = test01();
	int ref2 = test01();
	cout << "ref  = " << ref << endl;
	cout << "ref  = " << ref << endl;

	cout << "ref2  = " << ref2 << endl;
	cout << "ref2  = " << ref2 << endl;

	int& ref3 = test02();
	cout << "ref3  = " << ref3 << endl;
	cout << "ref3  = " << ref3 << endl;
	// ÉñÆæ
	test02() = 1000;
	cout << "ref3  = " << ref3 << endl;
	cout << "ref3  = " << ref3 << endl;


	return 0;
}