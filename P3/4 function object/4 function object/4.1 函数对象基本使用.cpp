#include <iostream>
#include <string>

using namespace std;
// ��������ͨ����
// �����Լ���״̬
class NewAdd {
public:
	int operator()(int v1, int v2) {
		num++;
		return v1 + v2;

	}
public:
	int num = 0;
};


//��Ϊ��������
void test412(NewAdd& add, int a, int b) {
	cout << add(a,b) << endl;
	cout << add.num << endl;
}




int main41() {
	NewAdd add;
	cout << add(1, 2) << endl;
	cout << add.num << endl;
	cout << add(1, 21) << endl;
	cout << add.num << endl;
	cout << add(1, 12) << endl;
	cout << add.num << endl;

	test412(add, 1, 30);
	return 0;
}