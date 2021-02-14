#include <iostream>
using namespace std;
/*
案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
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