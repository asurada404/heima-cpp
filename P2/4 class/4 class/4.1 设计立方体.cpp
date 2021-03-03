#include <iostream>
using namespace std;

class Cube {
private:
	double c_h;
public:
	void set_h(double h) {
		c_h = h;
	}
	double get_h() {
		return c_h;
	}
	double get_aera() {
		return c_h* c_h * 6;
	}
	double get_vol() {
		return c_h * c_h * c_h;
	}

};


class Circle {
public:
	double c_x, c_y;
	double c_r;
public:
	void set_r(double r) {
		c_r = r;
	}

	void set_x(double x) {
		c_x = x;
	}

	void set_y(double y) {
		c_y = y;
	}

	double get_r() {
		return c_r;
	}
	bool in_circle(double x, double y) {
		double dis = (c_x - x) * (c_x - x) + (c_y - y) * (c_y - y);
		return dis < c_r* c_r;
	}

};


int main411() {

	Cube c1;
	c1.set_h(12);
	cout << c1.get_h() << endl;
	cout << c1.get_aera() << endl;
	cout << c1.get_vol() << endl;


	Circle circle1;
	circle1.set_r(10);
	circle1.set_x(0);
	circle1.set_y(0);
	bool res = circle1.in_circle(50, 5);
	cout << "in circle ? " << res << endl;



	return 0;
}