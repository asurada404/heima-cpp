#include "student.h"
#include "print_student.h"
using namespace std;

// print the student information
// ��ַ����
void print_student(const student* s) {
	cout << "��ַ����" << endl;;
	cout << "name: " << s->name << " age: " << s->age << " score: " << s->score << endl;
}


// ֵ����
void print_student(student stu) {
	cout << "ֵ����" << endl;
	cout << "name: " << stu.name << " age: " << stu.age << " score: " << stu.score << endl;
}