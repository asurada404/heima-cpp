#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;

int main84() {

	struct student stu1 = { "lucy", 18, 99 };
	print_student(&stu1);

	student* p = &stu1;
	cout << p -> name;

	//�ܽ᣺�ṹ��ָ�����ͨ�� -> ������ �����ʽṹ���еĳ�Ա


	return 0;
}