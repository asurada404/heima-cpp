#include <iostream>
using namespace std;


/*
switch (����/�ַ���)
*/

/*
//�����Ӱ����
//10 ~ 9 ����
// 8 ~ 7 �ǳ���
// 6 ~ 5 һ��
// 5������ ��Ƭ
*/

int main3() {
	int score = 0;
	cout << "please enter the score :" << endl;
	cin >> score;
	switch (score) {
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
	case 7:
		cout << "�ǳ���" << endl;
		break;

	case 6:
	case 5:
		cout << "һ��" << endl;

	default:
		cout << "��Ƭ" << endl;
		break;
	
	}
	return 0;
	
};
