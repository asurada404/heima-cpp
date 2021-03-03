#include <iostream>
#include "Human.h"
#include "Phone.h"
using namespace std;
int main427() {
	Human h(10, 111);
	Phone p("1233");
	h.set_phone(p);
	cout << h.phone.name << endl;
	return 0;
}