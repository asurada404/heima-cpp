#include <iostream>
#include "Dog.h"
#include "Bird.h"
#include "Horse.h"

using namespace std;



/*
默认情况下，c++编译器至少给一个类添加3个函数
1．默认构造函数(无参，函数体为空)
2．默认析构函数(无参，函数体为空)
3．默认拷贝构造函数，对属性进行值拷贝

构造函数调用规则如下：
如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
如果用户定义拷贝构造函数，c++不会再提供其他构造函数
*/


int main424() {
	// Bird d; //Bird 不存在默认构造函数
	Bird d(10);
	Bird d1(d); //  默认提供拷贝函数

	// Horse h1; Horse不存在默认构造函数，提供了拷贝构造，一定要提供默认构造


	return 0;
}