#include <iostream>
using namespace std;

int main1() {

	/*
	
	int score = 0;
	cout << "please enter your score:" << endl;
	cin >> score;
	if (score > 600) {
		cout << "you score is very high!";
	}
	else if (score > 500) {
		cout << "you are in middle level.";
	}
	else {
		cout << "you score is very low ):";
	}
	*/
	/*
	��ʾ�û�����һ���߿����Է��������ݷ����������ж�
	�����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ���ϱ��ƣ�
	��һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�����˴�
	*/

	int score = 0;
	cout << "please enter your score:" << endl;
	cin >> score;
	if (score > 600) {
		cout << "�㿼����һ��!" << endl;
		if (score > 700) {
			cout << "�㿼���˱���" << endl;
		}
		else if (score > 650) {
			cout << "�㿼�����廪��" << endl;
		}
		else {
			cout << "�㿼�����˴�" << endl;
		}
	}
	else if (score > 500) {
		cout << "�㿼���˶���!" << endl;
	}
	else if (score > 400) {
		cout << "�㿼����������" << endl;
	}
	else {
		cout << "��û�п��ϱ��ơ�" << endl;
	}

	double weightA = 0.0, weightB = 0.0, weightC = 0.0;
	cout << "����С��A�����أ� " << endl;
	cin >> weightA;
	cout << "����С��B�����أ� " << endl;
	cin >> weightB;
	cout << "����С��C�����أ� " << endl;
	cin >> weightC;
	
	if (weightA > weightB) {
		if (weightA > weightC) {
			cout << "С��A���ء�" << endl;
		}
		else {
			cout << "С��C���ء�" << endl;
		}
	}
	else {
		if (weightB > weightC) {
			cout << "С��B���ء�" << endl;
		}
		else {
			cout << "С��C���ء�" << endl;
		}
	}


	return 0;
}
