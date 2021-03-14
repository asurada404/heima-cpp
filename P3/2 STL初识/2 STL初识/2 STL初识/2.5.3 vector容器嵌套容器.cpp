#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void test2531() {
	vector<vector<int>>  v_lst;
	for (int i = 0; i < 10; i++) {
		vector<int> v;
		for (int j = 0; j < 4; j++) {
			v.push_back(i * 10 + j);
		}
		v_lst.push_back(v);
	}
	for (vector<vector<int>>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		for(vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++) {
			cout << *jt << ", ";
		}
		cout << endl;
	}
}


int main() {
	test2531();
	return 0;

}
