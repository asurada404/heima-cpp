#include  <iostream>
using namespace std;

class Human471 {
public:
	int m_a;
public:
	virtual void speak() {
		cout << "����˵��" << endl;
	}
};

class Male :public Human471 {
public:
	void speak() {
		cout << "Male speak.." << endl;
	}
};


void dospeak(Human471& h) {
	h.speak();
}


int main471() {


	Male m;
	dospeak(m);


	return 0;
}