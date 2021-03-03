#include  <iostream>
using namespace std;

class BasicPage {
public:
	void header() {
		cout << "This is header.. " << endl;
	};
	void footer() {
		cout << "This is footer.. " << endl;
	};
	void left() {
		cout << "This is left.. " << endl;
	};
	void right() {
		cout << "This is right.. " << endl;
	};
};

class Python : public BasicPage {
public:
	void content() {
		cout << "This is Python content..." << endl;
	}
};

class Java :public BasicPage {
public:
	void content() {
		cout << "This is  JAVA content..." << endl;
	}
};

class Cpp :public BasicPage {
public:
	void content() {
		cout << "This is  Cpp content..." << endl;
	}
};

int main461() {

	Python py;
	py.header();
	py.left();
	py.right();
	py.content();
	py.footer();


	Java ja;
	ja.header();
	ja.left();
	ja.right();
	ja.content();
	ja.footer();

	Cpp cp;
	cp.header();
	cp.left();
	cp.right();
	cp.content();
	cp.footer();

	return 0;
}