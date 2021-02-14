#include <iostream>
using namespace std;

int main76() {

	int arr[] = { 0,1,2,10 };

	int* p = arr;

	cout << "1st element: " << arr[0] << endl;
	cout << "1st element by pointer: " << * p << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << *p++ << endl;
	}

	return 0;
}