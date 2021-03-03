#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01() {
	ofstream ofs;
	ofs.open("./text.txt", ios::out);
	ofs << "test1" << endl;
	ofs << "line2" << endl;
	ofs.close();

}


void write_test() {
	ifstream ifs;
	ifs.open("./text.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "open failure" << endl;
	}
	else {
		char c;
		/*
		while ((c = ifs.get()) != EOF) {
			cout << c << endl;
		}
		*/

		/*
		char buf[1024] = { 0 };
		int i = 0;
		while (ifs >> buf) {
			cout << ++i << endl;
			cout << buf << endl;
		}
		*/
		/*
		char buf[1024] = { 0 };
		while (ifs.getline(buf, sizeof(buf))) {
			cout << buf << endl;

		}
		*/

		string buf;
		while (getline(ifs, buf)) {
			cout << buf << endl;
		}

		ifs.close();


	}
}

int main31() {
	test01();
	write_test();
	return 0;
}