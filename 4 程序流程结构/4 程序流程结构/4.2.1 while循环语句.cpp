#include <iostream>

using namespace std;

int main421() {

	int num = 0;
	while (num < 10) {
		cout << "num: "<< num++ << endl;
	}

	int target = 100;
	int guess = target + 1;
	while (target != guess) {
		cout << "please enter the guess number: " << endl;
		cin >> guess;
		if (guess > target) {
			cout << "guess larger than target." << endl;
		}
		else {
			cout << "guess smaller than target." << endl;
		}
		
	}
	cout << "guess right!" << endl;
	return 0;
}