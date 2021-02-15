#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;

int main84() {

	struct student stu1 = { "lucy", 18, 99 };
	print_student(&stu1);

	student* p = &stu1;
	cout << p -> name;

	//总结：结构体指针可以通过 -> 操作符 来访问结构体中的成员


	return 0;
}