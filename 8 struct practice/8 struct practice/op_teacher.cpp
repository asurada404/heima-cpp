#include <iostream>
#include <string>
#include "Student.h"
#include "op_teacher.h"
#include "Teacher.h"
#include "print_student.h"

using namespace std;

void assign_val_to_teacher(Teacher* t, int len) {
	string name_seed = "ABCDE";
	string teacher_name_prefix = "teacher_";
	string student_name_prefix = "student_";
	for (int i = 0; i < len; i++) {
		Teacher te;
		te.name = teacher_name_prefix + name_seed[i];
		for (int j = 0; j < 5; j++) {
			string stu_name = student_name_prefix + name_seed[j];
			int stu_age = rand()%3 + 18;
			int stu_score = rand() % 61 + 41;
			te.stu_lst[j].name = stu_name;
			te.stu_lst[j].age = stu_age;
			te.stu_lst[j].score = stu_score;
		}
		*t++ = te;
	}
}


void print_one_teacher_info(Teacher* t) {
	cout << "Teacher name is :" << t->name << endl;
	for (int i = 0; i < 5; i++) {
		print_student(&(t->stu_lst)[i]);

	}
}

void print_teacher_lst(Teacher* t_lst, int len) {
	for (int i = 0; i < len; i++) {
		print_one_teacher_info(t_lst++);
	}


}


