#include "exchange.h"
void exchange(int a, int b) {
	cout << "In exchange function." << endl;
	cout << "a : " << a << " b : " << b << endl;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	cout << "a : " << a << " b : " << b << endl;

}