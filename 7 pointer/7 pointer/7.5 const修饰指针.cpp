#include <iostream>
using namespace std;

int main75() {
	/*
	1. const����ָ�� --- ����ָ��
	2. const���γ��� --- ָ�볣��
	3. const������ָ�룬�����γ���
	
	*/
	int a = 10;
	int b = 100;
	// 1. const����ָ�� --- ����ָ��
	// const ���ε���ָ�룬ָ��ָ����Ըı䣬ָ���Ӧ��ָ���ֵ���ı䣬���ǲ�����ͨ��ָ��ı�ֵָ���ֵ
	const int* p1 = &a;
	
	cout << "a: " << a << endl;
	cout << "*p1: " << *p1 << endl;
	cout << "p1 " << p1 << endl;
	p1 = &b; // p1 ָ��b���ڵ�λ��
	cout << "*p1: " << *p1 << endl;
	cout << "p1: " << p1 << endl; 

	int* p2 = &a;
	*p2 = 1000;
	cout << "a: "  << a << endl;

	//2. const���γ��� --- ָ�볣��
	int* const p3 = &a;
	//p3 = &b; ����
	*p3 = 10000; 
	cout << "a: " << a << endl;

	// 3. const������ָ�룬�����γ���
	const int* const p4 = &a;
	// p4 = &b ;//����
	// *p4 = 100000; //����

	// ���ɣ���const�Ҳ�����ŵ���ָ�뻹�ǳ���, ��ָ����ǳ���ָ�룬�ǳ�������ָ�볣��

	return 0;
}