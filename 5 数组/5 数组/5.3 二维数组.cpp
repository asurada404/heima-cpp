#include <iostream>
using namespace std;

int main53() {

	/*
	
	1. �������� ������[ ���� ][ ���� ];
	2. �������� ������[ ���� ][ ���� ] = { {����1������2 } ��{����3������4 } };
	3. �������� ������[ ���� ][ ���� ] = { ����1������2������3������4};
	4. �������� ������[ ][ ���� ] = { ����1������2������3������4};
	*/
	
	int rows = 0, cols = 0;

	// 1. �������� ������[ ���� ][ ���� ];
	int arr[2][3] = {};
	rows = sizeof(arr) / sizeof(arr[0]);
	cols = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}


	// 2. �������� ������[ ���� ][ ���� ] = { {����1������2 } ��{����3������4 } };
	int arr2[2][3] = { {1,2,3}, {4,5,10} };
	rows = sizeof(arr2) / sizeof(arr2[0]);
	cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr2[i][j] << ",";
		}
		cout << endl;
	}


	// 3. �������� ������[ ���� ][ ���� ] = { ����1������2������3������4};
	int arr3[3][3] = { 1,2,3, 4 };
	rows = sizeof(arr3) / sizeof(arr3[0]);
	cols = sizeof(arr3[0]) / sizeof(arr3[0][0]);
	cout << "the ros of arr: " << rows << ", the cols of arr: " << cols << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr3[i][j] << ",";
		}
		cout << endl;
	}


	// 4. �������� ������[ ][ ���� ] = { ����1������2������3������4};
	int arr4[][3] = { 1,2,3 };
	rows = sizeof(arr4) / sizeof(arr4[0]);
	cols = sizeof(arr4[0]) / sizeof(arr4[0][0]);
	cout << "the ros of arr: " << rows << ", the cols of arr: " << cols << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr4[i][j] << ",";
		}
		cout << endl;
	}


	/*
	���Գɼ�ͳ�ƣ�
	����������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±���ֱ��������ͬѧ
	���ܳɼ�
	
	*/

	double scores[3][3] = { {100, 100, 100}, {90, 50, 100}, {60, 70, 80} };
	rows = sizeof(scores) / sizeof(scores[0]);
	cols = sizeof(scores[0]) / sizeof(scores[0][0]);
	cout << "the ros of scores: " << rows << ", the cols of scores: " << cols << endl;
	for (int i = 0; i < rows; i++) {
		double all_score = 0;
		for (int j = 0; j < cols; j++) {
			cout << scores[i][j] << ",";
			all_score += scores[i][j];
		}
		cout << "all score is: " << all_score << endl;

	}


	return 0;
}