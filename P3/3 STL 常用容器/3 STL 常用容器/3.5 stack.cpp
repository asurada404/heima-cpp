#include <iostream>
#include <stack>
#include <string>

using namespace std;



void test351() {
	stack<int> s;
	s.push(1);
	s.push(2);
	while (!s.empty()) {
		cout << s.top() << " , ";
		s.pop();
	}
	cout << endl;
	

}
int main35() {
	test351();
	return 0;
}