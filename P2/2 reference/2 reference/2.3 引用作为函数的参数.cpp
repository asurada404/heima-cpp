#include <iostream>

using namespace std;

// 值传递
void swap01(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

// 地址传递
void swap02(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

// 引用传递
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
	
	// 通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单

	return 0;
}