#include <iostream>
#include <string>
using namespace std;

class Myprint {
public:
	void operator()(string text) {
		cout << text << endl;
	}
};

class Add {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

int main456() {
	Myprint mp;
	mp("co");

	Add add1;
	cout << add1(10, 20) << endl;
	// ÄäÃûµ÷ÓÃ
	cout << Add()(30, 200) << endl;
	return 0;
}