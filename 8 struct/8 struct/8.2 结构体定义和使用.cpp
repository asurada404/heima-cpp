#include <iostream>
#include <string>
#include "student.h"
#include "print_student.h"
using namespace std;


/*

ͨ���ṹ�崴�������ķ�ʽ�����֣�
	1. struct �ṹ���� ������
	2. struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ...}
	3. ����ṹ��ʱ˳�㴴������

*/


int main82() {

	// 1. struct �ṹ���� ������
	struct student stu1;
	stu1.name = "locy";
	stu1.age = 19;
	stu1.score = 90;
	print_student(&stu1);

	// 2. struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ...}
	struct student stu2 = { "kathy", 18, 100 };
	print_student(&stu2);

	// 3. ����ṹ��ʱ˳�㴴������
	/*
	stu3.name = "Oliy";
	stu3.age = 19;
	stu3.score = 97;
	print_student(&stu3);
	*/


	/*
	�ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
	�ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
	�ܽ�3���ṹ��������ò����� ''.'' ���ʳ�Ա
	
	*/


	return 0;
}