#include <iostream>
using namespace std;

int main() {

	/*
	���ַ�ʽ
	1. �������� ������[ ���鳤�� ];
	2. �������� ������[ ���鳤�� ] = { ֵ1��ֵ2 ...};
	3. �������� ������[ ] = { ֵ1��ֵ2 ...};
	*/
	
	// 1. �������� ������[���鳤��];
	int scores[10];

	scores[0] = 100;
	scores[1] = 95;
	for (int i = 0; i < 10; i++) {
		cout << scores[i] << endl;
	}


	//2. �������� ������[ ���鳤�� ] = { ֵ1��ֵ2 ...}; ʣ���ֵ��0��ȫ
	int scores2[10] = { 10,11,12,0 };
	for (int i = 0; i < 10; i++) {
		cout << scores2[i] << endl;
	}


	// 3. �������� ������[ ] = { ֵ1��ֵ2 ...};
	int scores3[] = { 10,11,12,10,11,12, 10,11,12,10 };
	for (int i = 0; i < 10; i++) {
		cout << scores3[i] << endl;
	}
	cout << "size of scores: "<< sizeof(scores3) << endl;
	cout << "size of scores[0]: " << sizeof(scores3[0]) << endl;
	cout << "number of elements in scores: " << sizeof(scores3) / sizeof(scores[0])<< endl;

	cout << "address of scores: " << (int)scores << endl;
	cout << "address of scores[0]: " << (int)&scores[0] << endl;
	cout << "address of scores: " << (int)&scores[1] << endl;


	/*
	��ϰ����1����ֻС�������
	����������
	��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};
	�ҳ�����ӡ���ص�С�����ء�
	*/
	double pigs_weights[] = { 300,350,200, 400, 250 };
	double min_weight = 1e10;
	for (int i = 0; i < sizeof(pigs_weights) / sizeof(pigs_weights[0]); i++) {
		if (pigs_weights[i] < min_weight) {
			min_weight = pigs_weights[i];
		}
	}
	cout << "the min weight of pig is :" << min_weight << endl;

	double tmp = 0;
	int num_of_elements = sizeof(pigs_weights) / sizeof(pigs_weights[0]);

	cout << "array before reverse:" << endl;

	for (int i = 0; i < num_of_elements; i++) {
		cout << pigs_weights[i] << ",";
	}
	cout << endl;

	// reverse array
	for (int i = 0; i < num_of_elements/2; i++) {
		tmp = pigs_weights[i];
		pigs_weights[i] = pigs_weights[num_of_elements - i - 1];
		pigs_weights[num_of_elements - i - 1] = tmp;
	}


	cout << "array after reverse:" << endl;
	for (int i = 0; i < num_of_elements; i++) {
		cout << pigs_weights[i] << ",";
	}
	cout << endl;

	// bubble sort
	/*
	���ã� ��õ������㷨����������Ԫ�ؽ�������
	1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
	2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
	3. �ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
	*/
	for (int i = 0; i < num_of_elements - 1; i++) {
		for (int j = 0; j < num_of_elements - 1 - i; j++) {
			if (pigs_weights[j] > pigs_weights[j+1]) {
				// exchange i-th element and j-element
				tmp = pigs_weights[j];
				pigs_weights[j] = pigs_weights[j+1];
				pigs_weights[j+1] = tmp;
			}
		}
	}
	// cout the sorted result.
	cout << "array after bubble sort: " << endl;
	for (int i = 0; i < num_of_elements; i++) {
		cout << pigs_weights[i] << ",";
	}
	cout << endl;


	return 0;
}