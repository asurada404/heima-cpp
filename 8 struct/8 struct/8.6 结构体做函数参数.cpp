#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;


int main86() {
	struct student st1 = { "kathy", 18, 100 };
	print_student(&st1);
	print_student(st1);
	// 总结：如果不想修改主函数中的数据，用值传递，反之用地址传递
	return 0;
}