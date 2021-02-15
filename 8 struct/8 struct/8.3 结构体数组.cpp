#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;


int main83() {

	struct student stu_lst[3] = {
		{"lucy", 19, 100},
		{"jack", 18, 90},
		{"kathy", 17, 90}
	};

	for (int i = 0; i < sizeof(stu_lst) / sizeof(stu_lst[0]); i++) {
		cout << "student " << i << "-th: ";
		print_student(&stu_lst[i]);
	}

	return 0;
}