#include <iostream>
using namespace std;


// ����������Ҫ���������βΣ���ֹ�����

void showvalue(const int& a) {
	//a++;
	cout << "a = " << a << endl;
}

int main() {

	const int& ref = 10;

	int tmp = 10;
	const int& ref2 = tmp;

	cout << " ref " << ref << endl;
	cout << " ref2 " << ref2 << endl;

	showvalue(ref);


	return 0;
}