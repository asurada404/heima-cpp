#include <iostream>
#include "student.h"
#include "print_student.h"

using namespace std;

int main87() {

	int a = 10;
	const int* p = &a; // ����ָ��
	int* const p1 = &a; // ָ�볣��

	return 0;
}