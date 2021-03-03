#include <iostream>
using namespace std;

class NewPerson {
public:
	NewPerson() {
		cout << "call 构造函数" << endl;
	}
	~NewPerson() {
		cout << "call 析构函数" << endl;
	}

};

int main421() {
	NewPerson p1;

	return 0;
}