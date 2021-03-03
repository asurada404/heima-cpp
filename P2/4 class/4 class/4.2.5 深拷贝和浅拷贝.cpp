#include <iostream>
#include "Human.h"
using namespace std;

// new
int* test01() {
	int* p = new int(10);
	return p;
}


int* test02() {
	int* p = new int[10];
	for (int i = 0; i < 10; i++) {
		p[i] = i + 100;
	}
	return p;
}



int main425() {
	int* p = test01();
	cout << *p << endl;
	cout << *p << endl;
	delete p;

	int* p2 = test02();
	for (int i = 0; i < 10; i++) {
		cout << p2[i] << endl;
	}
	delete[] p2;

	Human h1(10, 100);
	cout << "age: " << h1.age <<"  height: " << h1.height << endl;
	Human h2(h1);
	cout << "age: " << h2.age << "  height: " << h2.height << endl;
	

	return 0;
}