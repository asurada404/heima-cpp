#include <iostream>
using namespace std;

int main() {

	/*
	三种方式
	1. 数据类型 数组名[ 数组长度 ];
	2. 数据类型 数组名[ 数组长度 ] = { 值1，值2 ...};
	3. 数据类型 数组名[ ] = { 值1，值2 ...};
	*/
	
	// 1. 数据类型 数组名[数组长度];
	int scores[10];

	scores[0] = 100;
	scores[1] = 95;
	for (int i = 0; i < 10; i++) {
		cout << scores[i] << endl;
	}


	//2. 数据类型 数组名[ 数组长度 ] = { 值1，值2 ...}; 剩余的值用0补全
	int scores2[10] = { 10,11,12,0 };
	for (int i = 0; i < 10; i++) {
		cout << scores2[i] << endl;
	}


	// 3. 数据类型 数组名[ ] = { 值1，值2 ...};
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
	练习案例1：五只小猪称体重
	案例描述：
	在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
	找出并打印最重的小猪体重。
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
	作用： 最常用的排序算法，对数组内元素进行排序
	1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
	3. 重复以上的步骤，每次比较次数-1，直到不需要比较
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