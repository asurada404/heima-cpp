#include <iostream>
#include <queue>


using namespace std;

void test361() {
	queue<int> q;
	q.push(1);
	q.push(11);
	q.push(120);
	cout << "q size: " << q.size() << endl;
	cout << "q front " << q.front() << endl;
	cout << "q back " << q.back() << endl;
	cout << "q empty " << q.empty() << endl;
}

int main36() {
	test361();
	return 0;
}