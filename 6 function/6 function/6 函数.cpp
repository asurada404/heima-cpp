#include  <iostream>
#include "exchange.h"
using namespace std;


// ������������ ����������Σ�����ֻ�ܶ���һ��

int add(float a, float b);
int add(float a, float b);
int add(int a, int b);


int add(int a, int b) {
	return a + b;
};


void swap_val(int a, int b) {
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	cout << "in swap function: " << endl;
	cout << "a: " << a << ", b: " << b << endl;
}


// �޲��޷�
void test1() {
	cout << "this is a function without input and return." << endl;
}

// �޲��з�
int test2() {
	cout << "this is a function without input have return." << endl;
	return 10;
}

// �в��޷�
void test3(int arg) {
	cout << "this is a function without return have input." << endl;
	cout << "the input is " << arg << endl;
}

// �в��з�
int test4(int arg) {
	cout << "this is a function have both return and input." << endl;
	cout << "the input is " << arg << endl;
	return arg + 10;
}

int main() {
	/*
	1. �����Ķ��塢����
	2. ֵ�ô��ݣ��β�, ʵ��
	3. �����ĺ�����ʽ
	4. ����������
	5. ����һ���ļ�
	*/

	// 1. �����Ķ��塢����
	int a = 10, b = 100;
	cout << "the sum of a and b: " << add(a, b) << endl;
	

	// 2. ֵ�ô��ݣ��β�, ʵ��

	cout << "before call swap function.";
	cout << "a: " << a << ", b: " << b << endl;
	swap_val(a, b);
	cout << "after call swap function.";
	cout << "a: " << a << ", b: " << b << endl;

	// 3. �����ĺ�����ʽ
	test1();
	test2();
	test3(10);
	test4(10);


	// ����һ���ļ�
	/*
	1. ������׺��Ϊ.h��ͷ�ļ�
	2. ������׺��Ϊ.cpp��Դ�ļ�
	3. ��ͷ�ļ���д����������
	4. ��Դ�ļ���д�����Ķ���
	*/
	exchange(10, 100);
	return 0;

}