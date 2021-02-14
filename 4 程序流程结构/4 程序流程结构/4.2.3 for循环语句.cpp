#include <iostream>
using namespace std;

int main423() {
	for (int num = 0; num < 10; num++) {
		cout << "num : " << num << endl;
	}

	/*
	练习案例：敲桌子
	案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，
	我们打印敲桌子，其余数字直接打印输出。
	*/
	for (int c = 1; c <= 100; c++) {
		if (c%10 == 7 | (c/10)%10 == 7 | c%7 == 0 ) {
			cout << c << endl;
		}
	}
	return 0;
}