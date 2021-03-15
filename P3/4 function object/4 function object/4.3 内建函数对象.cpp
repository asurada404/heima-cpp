#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void test432() {
	negate<int> n;
	cout << n(50) << endl;

	plus<int> p;
	cout << p(10, 12) << endl;
}


void test433() {

	vector<int> v_lst;
	for (int i = 0; i < 10; i++) {
		v_lst.push_back(rand() % 10 + 21);
	}
	for (vector<int>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		cout << *it << " ; ";
	}
	cout << endl;
	sort(v_lst.begin(), v_lst.end());
	for (vector<int>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		cout << *it << " ; ";
	}
	cout << endl;
	sort(v_lst.begin(), v_lst.end(), greater<int>());
	for (vector<int>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		cout << *it << " ; ";
	}
}

void test434() {
	vector<bool> v;
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ; ";
	}
	cout << endl;

	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ; ";
	}
	cout << endl;


}


int main() {
	//test432();
	//test433();
	test434();


	return 0;
}