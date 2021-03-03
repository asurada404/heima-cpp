#include <iostream>
using namespace std;

class Sport {
public:
	int a;
public:
	void func() {
		cout << "func in Sport" << endl;
	}
	void func(int a) {
		cout << "func in Sport, and arg a: " << a << endl;
	}
	static void func1() {
		cout << "static func in Sport " << endl;
	}
};


class Ball : public Sport {
public:
	void func() {
		cout << "func in Ball" << endl;
	}
	static void func1() {
		cout << "static func in Ball " << endl;
	}
};

int main465() {

	Ball ball;
	ball.func();
	ball.Sport::func(); // 子类和父类的成员函数名一致时，想要访问父类的，需要在函数前面加作用域，默认是隐藏的
	ball.func1();
	ball.Sport::func1();

	Sport::func1();
	Ball::func1();
	return 0;
}