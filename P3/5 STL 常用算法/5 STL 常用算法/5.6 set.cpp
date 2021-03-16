#include <iostream>
#include <algorithm>
#include <set>;
#include <vector>

using namespace std;

void show_vector6(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "; ";
	}
	cout << endl;

}

void test01() {
	vector<int> v1, v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v_inter;
	v_inter.resize(min(v1.size(), v2.size()));
	vector<int>::iterator v_end = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v_inter.begin());
	for (vector<int>::iterator it = v_inter.begin(); it != v_end; it++) {
		cout << *it << ", ";
	}
	cout << endl;

	cout << "v1: ";
	show_vector6(v1);
	cout << "v2: ";
	show_vector6(v2);
	cout << "v1 U v2: ";
	show_vector6(v_inter);

	vector<int> v_union;
	v_union.resize(v1.size() + v2.size());
	vector<int>::iterator v_uion_end =  set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v_union.begin());
	cout << "set union: ";
	show_vector6(v_union);


	vector<int> v_diff;
	v_diff.resize(max(v1.size(), v2.size()));
	vector<int>::iterator v_diff_end = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v_diff.begin());
	cout << "set diff: " ;
	show_vector6(v_diff);



	
}

int main56() {
	test01();
	return 0;
}