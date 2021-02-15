#include <iostream>
#include <string>
#include "Student.h"
#include "print_student.h"
#include "op_teacher.h"
#include "Teacher.h"


using namespace std;

int main881() {
	Student stu = { "lucy", 10, 100 };
	print_student(&stu);
	Teacher teacher_lst[3];
	int len = sizeof(teacher_lst) / sizeof(teacher_lst[0]);
	assign_val_to_teacher(teacher_lst, len);

	print_one_teacher_info(&teacher_lst[0]);

	print_teacher_lst(teacher_lst, len);
	return 0;
}