#include <iostream>
#include "Dog.h"
using namespace std;


/*
4.2.2 构造函数的分类及调用
两种分类方式：
按参数分为： 有参构造和无参构造
按类型分为： 普通构造和拷贝构造
三种调用方式：
括号法
显示法
隐式转换法
*/




int main422() {
	// 括号法
	Dog d1;
	Dog d2(10);
	Dog d3(d2);
	cout << d1.c_age << endl;
	cout << d2.c_age << endl;
	cout << d3.c_age << endl;


	//显示法
	Dog d4 = Dog();
	Dog d5 = Dog(20);
	Dog d6 = Dog(d5);

	// 隐式转换法
	Dog d7;
	Dog d8 = 100;
	Dog d9 = d8;

	cout << d7.c_age << endl;
	cout << d8.c_age << endl;
	cout << d9.c_age << endl;


	return 0;
}