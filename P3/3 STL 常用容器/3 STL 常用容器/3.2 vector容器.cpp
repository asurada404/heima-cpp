#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


//template <class T>
void show_vector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++ ) {
		cout << *it << ", ";
	}
	cout << endl;
}

void test322() {
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	show_vector(v1);

	vector<int> v2(v1.begin(), v1.end());
	show_vector(v2);

	vector<int> v3(10, 100);
	show_vector(v3);

	vector<int> v4(v3);
	show_vector(v4);

}

void test323() {
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i);
	}

	show_vector(v2);
	vector<int> v3;
	v3 = v2;
	show_vector(v3);
	vector<int> v4;
	v4.assign(v2.begin(), v2.end());
	show_vector(v4);
	vector<int> v5;
	v5.assign(10, 1111);
	show_vector(v5);

}
//size
void test324() {
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i);
	}
	if (v2.empty()) {
		cout << "v2 is empty" << endl;
	}
	else {
		cout << "v2 capacity :" << v2.capacity() << endl;
		cout << "v2 size: " << v2.size() << endl;
		v2.resize(4);
		cout << "v2 capacity :" << v2.capacity() << endl;
		cout << "v2 size: " << v2.size() << endl;
		show_vector(v2);
		v2.resize(10, 10);
		show_vector(v2);
		cout << "v2 size: " << v2.size() << endl;
		cout << "v2 capacity :" << v2.capacity() << endl;
	}
}


// insert erase
void test325() {
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i);
	}
	show_vector(v2);
	for (int i = 0; i < 3; i++) {
		v2.pop_back();
	}
	show_vector(v2);

	v2.insert(v2.begin(), 'x');
	show_vector(v2);
	v2.insert(++v2.begin(), 'v');
	show_vector(v2);

	v2.insert(++v2.begin(), 5, 99);
	show_vector(v2);

	v2.erase(v2.begin());
	show_vector(v2);


	v2.erase(v2.begin(), v2.end());
	cout << ".." << endl;
	show_vector(v2);
	v2.clear();
	cout << ".." << endl;
	show_vector(v2);

}

//´æÈ¡
void test326() {
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i);
	}
	cout << "v2[0] : \t"<< v2[0] << endl;
	cout <<" v2.at(0): \t"<< v2.at(3) << endl;
	cout << "v2.front(): \t" << v2.front() << endl;
	cout << "v2.back():  \t" << v2.back() << endl;

}

void test327() {
	vector<int> v1;
	for (int i = 20; i > 0; i--) {
		v1.push_back(i);
	}

	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i);
	}
	cout << "v1" << endl;
	show_vector(v1);
	cout << "v2" << endl;
	show_vector(v2);
	v1.swap(v2);
	cout << "v1" << endl;
	show_vector(v1);
	cout << "v2" << endl;
	show_vector(v2);
}

void test3271() {
	vector<int> v;
	for (int i = 0; i < 1000; i++) {
		v.push_back(i);
	}
	cout << "v size: " << v.size() << endl;
	cout << "v capacity: " << v.capacity() << endl;

	v.resize(10);
	cout << "v size: " << v.size() << endl;
	cout << "v capacity: " << v.capacity() << endl;

	vector<int>(v).swap(v);
	cout << "v size: " << v.size() << endl;
	cout << "v capacity: " << v.capacity() << endl;

}

void test328() {
	vector<int> v;
	int* p = NULL;
	int num = 0;
	v.reserve(1000);
	for (int i = 0; i < 1000; i++) {
		v.push_back(0);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num: " << num << endl;

}



int main32() {
	//test322();
	//test323();
	//test324();
	//test325();
	//test326();
	//test3271();
	test328();
	return 0;
}