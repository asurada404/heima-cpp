#include "student.h"
#include "print_student.h"
using namespace std;

// print the student information
// 地址传递
void print_student(const student* s) {
	cout << "地址传递" << endl;;
	cout << "name: " << s->name << " age: " << s->age << " score: " << s->score << endl;
}


// 值传递
void print_student(student stu) {
	cout << "值传递" << endl;
	cout << "name: " << stu.name << " age: " << stu.age << " score: " << stu.score << endl;
}