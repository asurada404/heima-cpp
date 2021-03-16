#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
// 普通函数
void print(int val) {
	cout << val << " , ";
}

// 函数对象
class MyPrint {
public:
	void operator()(int val) {
		cout << val << " , ";
	}
};

// for each
void test511() {
	vector<int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(rand() % 100);
	}
	for_each(v.begin(), v.end(), print);
	cout << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}



class Transform {
public:
	int operator() ( int val) {
		return -val;
	}
};
// transform

void test512() {
	vector<int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(rand() % 100);
	}
	vector<int> v2;
	v2.resize(v.size()); // 提前开辟空间
	transform(v.begin(), v.end(), v2.begin(), Transform());
	for_each(v2.begin(), v2.end(), MyPrint());
}


int main51() {
	//test511();
	test512();
	return 0;
}