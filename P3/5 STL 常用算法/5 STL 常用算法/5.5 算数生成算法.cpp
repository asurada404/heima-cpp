#include<iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;


// aaccumulate
void test55() {
	vector<int> v;
	for (int i = 0; i < 100; i++) {
		v.push_back(i);
	}
	int ans = accumulate(v.begin(), v.begin() + 5, 1000);
	cout << "ans: " << ans << endl;

	fill(v.begin(), v.begin()+10, 1000);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}



int main55() {
	test55();
	return 0;
}