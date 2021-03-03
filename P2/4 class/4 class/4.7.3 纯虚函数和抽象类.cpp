#include <iostream>
using namespace std;


class Door {
public:
	int m_a;
public:
	virtual void func() = 0;
};


class SubDoor : public Door {
public:
	void func() {
		cout << "func implement in sub Door..." << endl;
	}
};

int main473() {
	// Door d; // 存在纯虚函数的类是抽象类，抽象类无法实例化；
	SubDoor sb;
	sb.func();
	return 0;
}