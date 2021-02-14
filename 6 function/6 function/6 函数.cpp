#include  <iostream>
#include "exchange.h"
using namespace std;


// 函数的声明， 可以声明多次，但是只能定义一次

int add(float a, float b);
int add(float a, float b);
int add(int a, int b);


int add(int a, int b) {
	return a + b;
};


void swap_val(int a, int b) {
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	cout << "in swap function: " << endl;
	cout << "a: " << a << ", b: " << b << endl;
}


// 无参无返
void test1() {
	cout << "this is a function without input and return." << endl;
}

// 无参有返
int test2() {
	cout << "this is a function without input have return." << endl;
	return 10;
}

// 有参无返
void test3(int arg) {
	cout << "this is a function without return have input." << endl;
	cout << "the input is " << arg << endl;
}

// 有参有返
int test4(int arg) {
	cout << "this is a function have both return and input." << endl;
	cout << "the input is " << arg << endl;
	return arg + 10;
}

int main() {
	/*
	1. 函数的定义、调用
	2. 值得传递，形参, 实参
	3. 常见的函数样式
	4. 函数的声明
	5. 单独一个文件
	*/

	// 1. 函数的定义、调用
	int a = 10, b = 100;
	cout << "the sum of a and b: " << add(a, b) << endl;
	

	// 2. 值得传递，形参, 实参

	cout << "before call swap function.";
	cout << "a: " << a << ", b: " << b << endl;
	swap_val(a, b);
	cout << "after call swap function.";
	cout << "a: " << a << ", b: " << b << endl;

	// 3. 常见的函数样式
	test1();
	test2();
	test3(10);
	test4(10);


	// 单独一个文件
	/*
	1. 创建后缀名为.h的头文件
	2. 创建后缀名为.cpp的源文件
	3. 在头文件中写函数的声明
	4. 在源文件中写函数的定义
	*/
	exchange(10, 100);
	return 0;

}