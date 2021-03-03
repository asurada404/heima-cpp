#include <iostream>
#include <string>
using namespace std;


class Building;
// 成员函数作友元
class House {
public:
	Building* b1;
public:
	House();
	void visit();
	void visit2();
};
class Building {
	// 全局函数做友元
	friend void friend_visit(Building* b);
	// 类做友元
	friend class Good;
	// 成员函数作友元
	friend void House::visit();

public:
	string m_bedroom;
private:
	string m_sitting_room;
public:
	Building() {
		this->m_bedroom = "bedroom";
		this->m_sitting_room = "sitting room";
	}
};




// 全局函数
void friend_visit(Building * b) {
	cout << "visit " << b->m_bedroom <<endl;
	cout << "visit " << b->m_sitting_room << endl;
}

// 类做友元
class Good {
public:
	Building b1;
public:
	void visit() {
		cout << "visit " << b1.m_bedroom << endl;
		cout << "visit " << b1.m_sitting_room << endl;
	}
};




void House::visit() {
	cout << "visit " << b1->m_bedroom << endl;
	cout << "visit " << b1->m_sitting_room << endl;
}

void House::visit2() {
	cout << "visit " << b1->m_bedroom << endl;
	//cout << "visit " << b1.m_sitting_room << endl;
}

House::House() {
	b1 = new Building;
}


void test442() {
	Good g;
	g.visit();
}
void test443() {
	House gen;
	gen.visit();
	gen.visit2();
}

int main441() {
	Building b1;
	friend_visit(&b1);

	test442();
	test443();
	return 0;
}
