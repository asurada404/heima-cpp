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
	// Door d; // ���ڴ��麯�������ǳ����࣬�������޷�ʵ������
	SubDoor sb;
	sb.func();
	return 0;
}