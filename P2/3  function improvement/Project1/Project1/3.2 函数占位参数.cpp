#include <iostream>
using namespace std;


void fun(int a, int) {
	cout << "this is function." << endl;
}

int main32() {

	fun(1, 2);
	fun(2, 3);

	return 0;
}