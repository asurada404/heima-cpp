#include <iostream>
using namespace std;

/*
函数的值传递和地址传递
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
	// 总结：如果不想修改实参，就用值传递，如果想修改实参，就用地址传递
	return 0;
}