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
	��ϰ�������˷��ھ���
	��������������Ƕ��ѭ����ʵ�־žų˷���
	*/

	for (int c = 1; c <= 9; c++) {
		for (int r = c; r <= 9; r++) {
			cout << c << "*" << r << "=" << c * r << "\t";
		}
		cout << endl;
	}

	return 0;
}