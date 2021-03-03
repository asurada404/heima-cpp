#include <iostream>
#include <string>
using namespace std;

class Hub {
public:
	string name;
	int age;
public:
	Hub(string name, int age) {
		this->name = name;
		this->age = age;
	}
	bool operator==(Hub& h) {
		if (this->name == h.name && this->age == h.age) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator!=(Hub& h) {
		if (this->name == h.name && this->age == h.age) {
			return false;
		}
		else {
			return true;
		}
	}



};
int main455() {

	Hub h1("jack", 11);
	Hub h2("jack", 22);
	Hub h3("jack", 22);
	cout << (h1 == h2) << endl;
	cout << (h2 == h3) << endl;

	return 0;
}