#include <iostream>
#include <string>
using namespace std;


class Building;
// ��Ա��������Ԫ
class House {
public:
	Building* b1;
public:
	House();
	void visit();
	void visit2();
};
class Building {
	// ȫ�ֺ�������Ԫ
	friend void friend_visit(Building* b);
	// ������Ԫ
	friend class Good;
	// ��Ա��������Ԫ
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




// ȫ�ֺ���
void friend_visit(Building * b) {
	cout << "visit " << b->m_bedroom <<endl;
	cout << "visit " << b->m_sitting_room << endl;
}

// ������Ԫ
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
