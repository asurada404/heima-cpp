#include <iostream>
using namespace std;

// this 指针的本质是指针常量， ClassName * const this; 指针常量，指向的对象是不能修改的，指向的对象的值是可以修改的；

class Computer {
public:
	Computer(){
		this->a = 0;
		this->b = 10;
	}
	void show_info() const{ // const Computer* const this;
		// a = 10;
		b = 20;
		cout << "a: " << a << " b: " << b << endl;
	}
	void func() {
		this->a = 111;
	}
public:
	int a;
	mutable int b;
};

int main434() {
	int a = 10;
	int b = 20;
	int* const p = &a;  //指针常量 指针是常量 指向不能改变
	*p = 20;
	// p = &b;
	const int* p2 = &a; // 常量指针, 常量的指针  不能通过指针改变指向对象的值，指向的对象可以改变
	p2 = &b; 
	// *p2 = 20;

	Computer c1;
	c1.show_info();

	const Computer c2;
	c2.show_info();
	// c2.func(); // 常对象只能调用常函数
	c2.b = 1000; //常对象访问 mutable的 member variable

	return 0;
}