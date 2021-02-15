#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;

int main87() {

	int a = 10;
	const int* p = &a; // 常量指针
	int* const p1 = &a; // 指针常量

	return 0;
}