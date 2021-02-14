#include <iostream>
using namespace std;

int main431() {

	for (int i = 1; i < 100; i++) {
		if (i % 10 == 0) {
			break;
		}
		else if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;


	}
	return 0;
}