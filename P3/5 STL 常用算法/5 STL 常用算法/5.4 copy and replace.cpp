#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class SmallerFive {
public:
	bool operator()(int val) {
		return val < 5;
	}
};

void show_vector2(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}


// copy
void test541() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	show_vector2(v);
	vector<int> v2;
	v2.resize(v.size());
	show_vector2(v2);
	copy(v.begin(), v.end(), v2.begin());
	show_vector2(v2);
	replace(v2.begin(), v2.end(), 1, 1000);
	show_vector2(v2);

	replace_if(v2.begin(), v2.end(), SmallerFive(), 1000);
	show_vector2(v2);
	show_vector2(v);
	swap(v, v2);
	show_vector2(v2);
	show_vector2(v);
}

int main54() {
	test541();
	return 0;
}