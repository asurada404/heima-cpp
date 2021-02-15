#include <iostream>
#include "Student.h"
#include "print_student.h"

void print_student(Student *stu)
	{
	cout << "name: " << stu->name << ", age: " << stu->age << ", score: " << stu->score << endl;

	}