#include <iostream>
using namespace std;

class Comp {
public:
	int* m_age;
public:
	Comp(int age) {
		m_age = new int(age);
	};
	Comp& operator=(Comp& c) {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*c.m_age);
		return *this;

	};
	~Comp() {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
	}


};


int main454() {
	Comp c1(10), c2(20), c3(30);
	c1 = c2 = c3;
	cout << *c1.m_age << endl;
	cout << *c2.m_age << endl;
	cout << *c3.m_age << endl;

	return 0;
}