#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
// 谓词
// 返回类型为bool的仿函数成为谓词

class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};

class MyCompare {
public:
	bool operator()(int val1, int val2) {
		return val1 > val2;
	}
};

int main42() {
	vector<int> v_lst;
	for (int i = 0; i < 10; i++) {
		int val = rand() % 5 + 4;
		v_lst.push_back(val);
	}
	vector<int>::iterator pos = find_if(v_lst.begin(), v_lst.end(), GreaterFive());
	if (pos == v_lst.end()) {
		cout << "not element satisfy the condition" << endl;
	}
	else {
		cout << *pos << endl;
	}
	sort(v_lst.begin(), v_lst.end(), MyCompare());
	for (vector<int>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		cout << *it << " , ";
	}
	cout << endl;
	return 0;



}