#include <iostream>
using namespace std;


// 常量引用主要用来修饰形参，防止误操作

void showvalue(const int& a) {
	//a++;
	cout << "a = " << a << endl;
}

int main() {

	const int& ref = 10;

	int tmp = 10;
	const int& ref2 = tmp;

	cout << " ref " << ref << endl;
	cout << " ref2 " << ref2 << endl;

	showvalue(ref);


	return 0;
}