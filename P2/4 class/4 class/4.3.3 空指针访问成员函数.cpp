#include <iostream>
using namespace std;

// ��ָ���ǿ��Ե��ó�Ա�����ģ�����ע���Ա������this��ʹ�����

class Sentence {
public:
	int size;
public:
	void func() {
		cout << "call  func." << endl;
	};
	void func2() {
		if (this == NULL) {
			return;
		}
		this->size = 10;
		cout << "call func2." << endl;
	}
};

int main433() {
	Sentence *s1 = NULL;
	s1->func();
	s1->func2();
	return 0;
}