#include <iostream>
#include "Dog.h"

using namespace std;

/*
C++�п������캯������ʱ��ͨ�����������
ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
ֵ���ݵķ�ʽ������������ֵ
��ֵ��ʽ���ؾֲ�����

*/
//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1() {
	Dog d(100);
	Dog new_d(d);
	Dog new_d2(d);
}

//ֵ���ݵķ�ʽ������������ֵ
void doWork(Dog d1) {
}

void test02() {
	Dog d;
	doWork(d);
}


// ��ֵ��ʽ���ؾֲ�����
Dog doWork2() {
	Dog d1;
	cout << (int*)&d1 << endl;
	return d1;
}

void test03() {
	Dog d = doWork2();
	cout << (int*)&d << endl;
}

int main423() {
	test1();
	cout << "... " << endl;
	test02();
	cout << "... " << endl;
	test03();

	return 0;
}