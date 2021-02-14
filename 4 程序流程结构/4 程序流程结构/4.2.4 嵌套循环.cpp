#include <iostream>
using namespace std;

int main424() {


	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	/*
	练习案例：乘法口诀表
	案例描述：利用嵌套循环，实现九九乘法表
	*/

	for (int c = 1; c <= 9; c++) {
		for (int r = c; r <= 9; r++) {
			cout << c << "*" << r << "=" << c * r << "\t";
		}
		cout << endl;
	}

	return 0;
}