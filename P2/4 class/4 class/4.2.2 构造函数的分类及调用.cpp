#include <iostream>
#include "Dog.h"
using namespace std;


/*
4.2.2 ���캯���ķ��༰����
���ַ��෽ʽ��
��������Ϊ�� �вι�����޲ι���
�����ͷ�Ϊ�� ��ͨ����Ϳ�������
���ֵ��÷�ʽ��
���ŷ�
��ʾ��
��ʽת����
*/




int main422() {
	// ���ŷ�
	Dog d1;
	Dog d2(10);
	Dog d3(d2);
	cout << d1.c_age << endl;
	cout << d2.c_age << endl;
	cout << d3.c_age << endl;


	//��ʾ��
	Dog d4 = Dog();
	Dog d5 = Dog(20);
	Dog d6 = Dog(d5);

	// ��ʽת����
	Dog d7;
	Dog d8 = 100;
	Dog d9 = d8;

	cout << d7.c_age << endl;
	cout << d8.c_age << endl;
	cout << d9.c_age << endl;


	return 0;
}