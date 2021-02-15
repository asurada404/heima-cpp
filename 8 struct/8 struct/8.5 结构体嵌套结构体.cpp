#include <iostream>
#include "student.h"
#include "Teacher.h"
#include "print_student.h"

using namespace std;

int main85() {
	struct Teacher t1;
	t1.id = 0;
	t1.name = "Tony";
	t1.age = 40;
	t1.room_id = 101;
	t1.stu.name = "lucy";
	t1.stu.age = 10;
	t1.stu.score = 100;
	print_student(&t1.stu);
	return 0;
}