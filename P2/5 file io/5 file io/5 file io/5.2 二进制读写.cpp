#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
public:
	int m_a;
	int m_b;
};


void test_write() {
	ofstream ofs("./person.txt", ios::out | ios::binary);
	Person p = { 11,12 };
	cout << p.m_a << endl;
	ofs.write((const char*)&p, sizeof(p));
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();

}

void test_read() {

	ifstream ifs("./person.txt", ios::in | ios::binary);
	if (ifs.is_open()) {
		Person p;
		ifs.read((char*)&p, sizeof(p));
		cout << p.m_a << endl;
	}
}


int main() {
	test_write();
	test_read();
	return 0;
}