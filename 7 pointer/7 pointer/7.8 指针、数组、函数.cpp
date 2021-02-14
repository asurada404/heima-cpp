#include <iostream>
using namespace std;
/*
������������װһ������������ð������ʵ�ֶ������������������
*/


void show_arr(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << *arr++ << ", ";
	}
	cout << endl;
}

void swap(int* p1, int* p2) {
	cout << "swap " << *p1 << " and " << *p2 << endl;
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	
}

void bubble_sort(int * arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				show_arr(arr, len);
			}
			
		}
		cout << "----------------------------" << endl;
	}
}

int main() {
	int arr[] = { 100, 10, 1000, 11, 13,1232 };
	int len_arr = sizeof(arr) / sizeof(arr[0]);
	cout << "before sort : " << endl;
	show_arr(arr, len_arr);
	cout << endl;
	bubble_sort(arr, len_arr);
	cout << "after sort : " << endl;
	show_arr(arr, len_arr);
	cout << endl;
	return 0;
}