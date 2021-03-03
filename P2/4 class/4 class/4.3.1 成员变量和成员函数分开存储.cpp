#include <iostream>
using namespace std;

class Person2 {
public:
	Person2() {
		mA = 0;
	}
	int mA;
	static int mB;
	void func() {
		cout << "mA: " << this->mA << endl;
	};
	static void sfun() {
		cout << "call sfun " << endl;
	}

};



int main431() {

	Person2 p2;
	cout << "p2 mA: "<< p2.mA << endl;
	p2.func();
	p2.mA = 10;
	p2.func();
	cout << "p2 mA: " << p2.mA << endl;
	return 0;
}