#include <iostream>
#include "Dog.h"

using namespace std;

/*
C++中拷贝构造函数调用时机通常有三种情况
使用一个已经创建完毕的对象来初始化一个新对象
值传递的方式给函数参数传值
以值方式返回局部对象

*/
//使用一个已经创建完毕的对象来初始化一个新对象
void test1() {
	Dog d(100);
	Dog new_d(d);
	Dog new_d2(d);
}

//值传递的方式给函数参数传值
void doWork(Dog d1) {
}

void test02() {
	Dog d;
	doWork(d);
}


// 以值方式返回局部对象
Dog doWork2() {
	Dog d1;
	cout << (int*)&d1 << endl;
	return d1;
}

void test03() {
	Dog d = doWork2();
	cout << (int*)&d << endl;
}

int main423() {
	test1();
	cout << "... " << endl;
	test02();
	cout << "... " << endl;
	test03();

	return 0;
}