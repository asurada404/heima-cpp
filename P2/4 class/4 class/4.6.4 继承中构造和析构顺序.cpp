#include <iostream>
using namespace std;


class Office {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

public:
	Office() {
		cout << "Office �Ĺ��캯��" << endl;
	};
	~Office() {
		cout << "Office ����������" << endl;
	};

};

class Word1 : public Office {
public:
	Word1() {
		cout << "Word �Ĺ��캯��" << endl;
	};
	~Word1() {
		cout << "Word ����������" << endl;
	};
};

int main464() {

	Word1 w1;


	return 0;
}