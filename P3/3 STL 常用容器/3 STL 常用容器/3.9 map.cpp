#include <iostream>
#include <string>
#include <map>
using namespace std;


void show_map(map<string, int>& m) {
	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "name: "  <<  it->first << ", \t age: "<< it->second << endl;
	}
}

void test391() {
	map<string, int> m1;
	m1.insert(pair<string, int>("jack", 1));
	m1.insert(pair<string, int>("jac22k", 12));
	m1.insert(pair<string, int>("ja22ck",221));
	m1.insert(pair<string, int>("ja2ck", 12));
	show_map(m1);

	map<string, int>::iterator it  = m1.find("jack22");
	if (it != m1.end()) {
		cout << it->first << it->second << endl;
	}
	else {
		cout << "not found " << endl;
	}


}
int main39() {
	test391();
	return 0;
}