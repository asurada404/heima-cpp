#include <iostream>
using namespace std;

int main75() {
	/*
	1. const修饰指针 --- 常量指针
	2. const修饰常量 --- 指针常量
	3. const即修饰指针，又修饰常量
	
	*/
	int a = 10;
	int b = 100;
	// 1. const修饰指针 --- 常量指针
	// const 修饰的是指针，指针指向可以改变，指针对应的指向和值都改变，但是不可以通过指针改变值指向的值
	const int* p1 = &a;
	
	cout << "a: " << a << endl;
	cout << "*p1: " << *p1 << endl;
	cout << "p1 " << p1 << endl;
	p1 = &b; // p1 指向b所在的位置
	cout << "*p1: " << *p1 << endl;
	cout << "p1: " << p1 << endl; 

	int* p2 = &a;
	*p2 = 1000;
	cout << "a: "  << a << endl;

	//2. const修饰常量 --- 指针常量
	int* const p3 = &a;
	//p3 = &b; 报错
	*p3 = 10000; 
	cout << "a: " << a << endl;

	// 3. const即修饰指针，又修饰常量
	const int* const p4 = &a;
	// p4 = &b ;//报错
	// *p4 = 100000; //报错

	// 技巧：看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量

	return 0;
}