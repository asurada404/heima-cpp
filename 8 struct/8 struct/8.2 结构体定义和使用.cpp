#include <iostream>
#include <string>
#include "student.h"
#include "print_student.h"
using namespace std;


/*

通过结构体创建变量的方式有三种：
	1. struct 结构体名 变量名
	2. struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
	3. 定义结构体时顺便创建变量

*/


int main82() {

	// 1. struct 结构体名 变量名
	struct student stu1;
	stu1.name = "locy";
	stu1.age = 19;
	stu1.score = 90;
	print_student(&stu1);

	// 2. struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
	struct student stu2 = { "kathy", 18, 100 };
	print_student(&stu2);

	// 3. 定义结构体时顺便创建变量
	/*
	stu3.name = "Oliy";
	stu3.age = 19;
	stu3.score = 97;
	print_student(&stu3);
	*/


	/*
	总结1：定义结构体时的关键字是struct，不可省略
	总结2：创建结构体变量时，关键字struct可以省略
	总结3：结构体变量利用操作符 ''.'' 访问成员
	
	*/


	return 0;
}