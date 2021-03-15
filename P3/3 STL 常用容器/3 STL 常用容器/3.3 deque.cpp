#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

void show_deque(deque<int>& d) {
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

void test332() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
		d1.push_front(i-1);
	}
	show_deque(d1);
	deque<int> d2(d1.begin(), d1.end());
	show_deque(d2);

	deque<int> d3(10, 11);
	show_deque(d3);

	deque<int> d4 = d3;
	show_deque(d4);
}

void test333() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
		d1.push_front(i - 1);
	}
	show_deque(d1);
	deque<int> d2;
	d2 = d1;
	show_deque(d2);
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	show_deque(d3);

	deque<int> d4;
	d4.assign(10, 22);
	show_deque(d4);

}

void test334() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
		d1.push_front(i - 1);
	}
	show_deque(d1);
	cout << "d1 size: " << d1.size() << endl;
	d1.resize(5);
	show_deque(d1);
	cout << "d1 size: " << d1.size() << endl;
	d1.resize(100);
	show_deque(d1);
	cout << "d1 size: " << d1.size() << endl;

}

void test335() {
	deque<int> d;
	d.push_back(10);
	d.push_back(11);
	d.push_front(1);
	d.push_front(0);
	show_deque(d);
	d.insert(d.begin(), 2, 10);
	d.insert(d.begin(), 2, 2);
	show_deque(d);
	d.erase(d.begin(), d.begin()+3);
	show_deque(d);
	d.erase(d.begin(),d.end());
	d.clear();
	show_deque(d);
}

//SORT
void test337() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
		d1.push_front(i - 1);
	}
	show_deque(d1);
	sort(d1.begin(), d1.end());
	show_deque(d1);


}

int main33() {
	//test331();
	//test332();
	//test333();
	//test334();
	//test335();
	test337();
	return 0;
}