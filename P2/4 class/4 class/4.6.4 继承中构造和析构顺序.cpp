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
		cout << "Office 的构造函数" << endl;
	};
	~Office() {
		cout << "Office 的析构函数" << endl;
	};

};

class Word1 : public Office {
public:
	Word1() {
		cout << "Word 的构造函数" << endl;
	};
	~Word1() {
		cout << "Word 的析构函数" << endl;
	};
};

int main464() {

	Word1 w1;


	return 0;
}