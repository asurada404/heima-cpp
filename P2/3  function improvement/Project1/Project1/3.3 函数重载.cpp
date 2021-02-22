#include <iostream>
using namespace std;

void func( ) {
	cout << " func() " << endl;
}

void func(int a) {
	cout << " func(int a) " << endl;
}

void func(double a) {
	cout << " func(double a)" << endl;
}

void func(int a, double b) {
	cout << " func(int a, double b)" << endl;
}

void func(double a, int b) {
	cout << " func(double a, int b)" << endl;
}


void funv(int& a) {
	cout << " func(int& a)" << endl;
}

void funv(const int& a) {
	cout << " func(const int& a)" << endl;
}


void func2(int a, int b = 10) {
	cout << " func2(int a, int b = 10)" << endl;
}
void func2(int a) {
	cout << " func2(int a)" << endl;
}

int main() {
	int a = 10;
	double b = 20;
	func();
	func(a);
	func(b);
	func(a, b);
	func(b, a);

	funv(a);
	funv(10);

	//func2(a);
	func2(a, b);

	return 0;
}