#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MyCompare {
public:
	bool operator()(int val1, int val2) {
		return val1 > val2;
	}
};

void show_vector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}
//
void test531() {
	vector<int> v_lst;
	for (int i = 0; i < 15; i++) {
		v_lst.push_back(rand() % 20);
	}
	show_vector(v_lst);
	sort(v_lst.begin(), v_lst.end());
	show_vector(v_lst);
	sort(v_lst.begin(), v_lst.end(), MyCompare());
	show_vector(v_lst);

	// random shuffle
	srand((unsigned int)time(NULL));
	cout << "seed: " << time << endl;
	random_shuffle(v_lst.begin(), v_lst.end()-5);
	show_vector(v_lst);
}

// merge
void test533() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 15; i++) {
		v1.push_back(i);
		v2.push_back(i+1);
	}
	show_vector(v1);
	show_vector(v2);
	vector<int> vtarget;
	vtarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	show_vector(vtarget);
}


// reverse
void test534() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 15; i++) {
		v1.push_back(rand()%20);
	}
	show_vector(v1);
	reverse(v1.begin(), v1.end());
	show_vector(v1);

}


int main53() {
	// test531();
	//test533();
	test534();
	return 0;
}