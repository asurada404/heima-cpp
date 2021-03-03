#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger m);
private:
	int m_a;
public:
	MyInteger(int a) {
		m_a = a;
	}
	MyInteger& operator++() {
		m_a++;
		return *this;
	}
	MyInteger operator++(int) {
		MyInteger tmp = *this;
		m_a++;
		return tmp;
	}
};

ostream& operator<<(ostream& out, MyInteger m) {
	out << "a:  "<<  m.m_a << endl;
	return out;
};

int main453() {
	MyInteger m(10);
	cout << m;
	
	cout << ++m;
	cout << m++;
	cout << m;
	return 0;
}