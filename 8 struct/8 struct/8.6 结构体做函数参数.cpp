#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;


int main86() {
	struct student st1 = { "kathy", 18, 100 };
	print_student(&st1);
	print_student(st1);
	// �ܽ᣺��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����
	return 0;
}