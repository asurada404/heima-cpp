#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 20;

const int c_g_a = 30;
const int c_g_b = 40;


/*
����������ź�����Ķ����ƴ��룬�ɲ���ϵͳ���й����
ȫ�����������������������ȫ�ֱ����;�̬�����Լ�����
ջ�����ɱ������Զ������ͷ�, ��ź����Ĳ���ֵ,�ֲ�������
�������ɳ���Ա������ͷ�,������Ա���ͷ�,�������ʱ�ɲ���ϵͳ����


*/

int main11() {

	int a = 10;
	int b = 20;

	cout << "�ֲ�����a��ַ�� " << (int)&a << endl;
	cout << "�ֲ�����b��ַ�� " << (int)&b << endl;

	cout << "ȫ�ֱ���g_a��ַ�� " << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b��ַ�� " << (int)&g_b << endl;

	static int s_a = 10;
	static int s_b = 20;

	cout << "��̬����s_a��ַ�� " << (int)&s_a << endl;
	cout << "��̬����s_b��ַ�� " << (int)&s_b << endl;

	cout << "�ַ���������ַ�� " << (int)&"hello world" << endl;
	cout << "�ַ���������ַ�� " << (int)&"hello world2" << endl;

	cout << "ȫ�ֳ���c_g_a��ַ�� " << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b��ַ�� " << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 20;

	cout << "�ֲ�����c_l_a��ַ�� " << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b��ַ�� " << (int)&c_l_b << endl;
	return 0;
}