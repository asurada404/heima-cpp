#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 20;

const int c_g_a = 30;
const int c_g_b = 40;


/*
代码区：存放函数体的二进制代码，由操作系统进行管理的
全局区（包括常量区）：存放全局变量和静态变量以及常量
栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收


*/

int main11() {

	int a = 10;
	int b = 20;

	cout << "局部变量a地址： " << (int)&a << endl;
	cout << "局部变量b地址： " << (int)&b << endl;

	cout << "全局变量g_a地址： " << (int)&g_a << endl;
	cout << "全局变量g_b地址： " << (int)&g_b << endl;

	static int s_a = 10;
	static int s_b = 20;

	cout << "静态变量s_a地址： " << (int)&s_a << endl;
	cout << "静态变量s_b地址： " << (int)&s_b << endl;

	cout << "字符串常量地址： " << (int)&"hello world" << endl;
	cout << "字符串常量地址： " << (int)&"hello world2" << endl;

	cout << "全局常量c_g_a地址： " << (int)&c_g_a << endl;
	cout << "全局常量c_g_b地址： " << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 20;

	cout << "局部常量c_l_a地址： " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b地址： " << (int)&c_l_b << endl;
	return 0;
}