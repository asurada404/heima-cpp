#include <iostream>
using namespace std;

int main423() {
	for (int num = 0; num < 10; num++) {
		cout << "num : " << num << endl;
	}

	/*
	��ϰ������������
	������������1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı�����
	���Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
	*/
	for (int c = 1; c <= 100; c++) {
		if (c%10 == 7 | (c/10)%10 == 7 | c%7 == 0 ) {
			cout << c << endl;
		}
	}
	return 0;
}