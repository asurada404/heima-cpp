#include <iostream>
using namespace std;

class NewPerson {
public:
	NewPerson() {
		cout << "call ���캯��" << endl;
	}
	~NewPerson() {
		cout << "call ��������" << endl;
	}

};

int main421() {
	NewPerson p1;

	return 0;
}