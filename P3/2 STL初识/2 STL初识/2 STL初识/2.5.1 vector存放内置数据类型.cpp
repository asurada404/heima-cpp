#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(int val) {
	cout << val << endl;

}

void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	vector<int>::iterator p_begin = v.begin();
	vector<int>::iterator p_end = v.end();

	while (p_begin != p_end) {
		cout << *p_begin++ << endl;
	}
	cout << "===============" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	for_each(v.begin(), v.end(), show);

}


int main251() {
	test01();
	return 0;
}