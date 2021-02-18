#include <iostream>
using namespace std;

int* func1() {
	int* a = new int(10);
	return a;
}

int main12() {

	int* p = func1();
	cout <<"first call: "  << *p << endl;

	cout <<"second call: " << *p << endl;

	return 0;
}

/*
堆区数据由程序员管理开辟和释放
堆区数据利用new关键字进行开辟内存
*/