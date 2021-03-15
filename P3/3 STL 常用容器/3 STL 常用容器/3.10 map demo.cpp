#include <iostream>
#include <map>
#include <string>
#include <vector>


using namespace std;

class Worker {
public:
	string name;
	double salary;
public:
	Worker(string name, double salary) {
		this->name = name;
		this->salary = salary;
	}
};

void create_woker(vector<Worker>& v_lst) {
	string name_pre = "ABCDEFGHIJ";
	for (int i = 0; i < name_pre.size(); i++) {
		string name = "worker_";
		name += name_pre[i];
		double salary = rand() % 10000 + 10000.0;
		Worker w(name, salary);
		v_lst.push_back(w);
	}

}

void show_all_worker(vector<Worker>& v_lst) {
	for (vector<Worker>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		cout << "name: " << it->name << ", \t salary: " << it->salary << endl;
	}
}

void set_group(vector<Worker>& v_lst, multimap<int,Worker>& mm) {
	for (int i = 0; i < v_lst.size(); i++) {
		Worker w = v_lst[i];
		int key = rand() % 3;
		pair<int, Worker> p(key, w);
		mm.insert(p);
	}
}

void show_worker(Worker& w) {
	cout << "name: " << w.name << ", \tsalary: " << w.salary << endl;
}

void show_one_group(multimap<int, Worker>& m, int key) {
	cout << "department "<<  key << ": " << endl;
	multimap<int, Worker>::iterator pos = m.find(key);
	int count = m.count(key);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		show_worker(pos->second);
	}
}

void show_by_group(multimap<int, Worker>& m) {
	show_one_group(m, 1);
	show_one_group(m, 2);
	show_one_group(m, 0);

}

int main310() {
	vector<Worker> v_lst;
	create_woker(v_lst);
	show_all_worker(v_lst);
	multimap<int, Worker> m;
	set_group(v_lst, m);
	show_by_group(m);
	return 0;
}