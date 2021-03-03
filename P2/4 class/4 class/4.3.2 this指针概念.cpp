#include <iostream>
#include "Car.h"

using namespace std;

int main432() {
	Car c1;
	c1.set_size(10);
	cout << c1.get_size() << endl;

	Car c2;
	c2.set_size(10);
	c1.add_size(c2);
	cout << c1.get_size() << endl;

	cout << c1.add_size(c2).add_size(c2).add_size(c2).get_size() << endl;
	cout << c2.add_size(c2).add_size(c2).get_size() << endl;
	return 0;
}