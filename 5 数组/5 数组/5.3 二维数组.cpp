#include <iostream>
using namespace std;

int main53() {

	/*
	
	1. 数据类型 数组名[ 行数 ][ 列数 ];
	2. 数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
	3. 数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
	4. 数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};
	*/
	
	int rows = 0, cols = 0;

	// 1. 数据类型 数组名[ 行数 ][ 列数 ];
	int arr[2][3] = {};
	rows = sizeof(arr) / sizeof(arr[0]);
	cols = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}


	// 2. 数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
	int arr2[2][3] = { {1,2,3}, {4,5,10} };
	rows = sizeof(arr2) / sizeof(arr2[0]);
	cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr2[i][j] << ",";
		}
		cout << endl;
	}


	// 3. 数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
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


	// 4. 数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};
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
	考试成绩统计：
	案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，请分别输出三名同学
	的总成绩
	
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