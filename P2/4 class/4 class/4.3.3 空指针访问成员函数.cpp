#include <iostream>
using namespace std;

// 空指针是可以调用成员函数的，但是注意成员函数中this的使用情况

class Sentence {
public:
	int size;
public:
	void func() {
		cout << "call  func." << endl;
	};
	void func2() {
		if (this == NULL) {
			return;
		}
		this->size = 10;
		cout << "call func2." << endl;
	}
};

int main433() {
	Sentence *s1 = NULL;
	s1->func();
	s1->func2();
	return 0;
}