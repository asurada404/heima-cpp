#include <iostream>
using namespace std;

int main422() {
	int num = 0;
	do {
		cout << "num: " << num++ << endl;
	} while (num < 10);

	/*
	Ë®ÏÉ»¨Êý
	1^3 + 5^3+ 3^3 = 153
	*/
	int num1 = 100;

	do {
		if ( pow(num/100, 3) + pow( (num%100)/10, 3) + pow(num%10, 3)  == num) {
			cout << num<< endl;
		}
	} while (++num < 1000);
	return 0;
}