#include <iostream>
using namespace std;

int* func1() {
	int* a = new int(10);
	return a;
}

int main12() {

	int* p = func1();
	cout <<"first call: "  << *p << endl;

	cout <<"second call: " << *p << endl;

	return 0;
}

/*
���������ɳ���Ա�����ٺ��ͷ�
������������new�ؼ��ֽ��п����ڴ�
*/