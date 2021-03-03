#include <iostream>
using namespace std;

class Animal {
public: 
	int m_a;
public:
	Animal() {
		m_a = 1000;
	}
};

class Sheep : virtual public Animal {
	
};

class Tuo : virtual public Animal {

};

class SheepTuo : public Sheep, public Tuo {

};


int main468() {
	SheepTuo st;
	st.Sheep::m_a = 100;
	st.Tuo::m_a = 20;
	cout << st.Sheep::m_a << endl;
	cout << st.Tuo::m_a << endl;
	cout << st.Animal::m_a << endl;
	cout << st.m_a << endl;
	return 0;
}