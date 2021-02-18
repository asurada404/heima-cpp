#include <iostream>
using namespace std;

int* func() {
	int* a = new int(10);
	return a;
}

int main() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	
	delete p;


	// 堆区，开辟数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << i << " : "  << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}