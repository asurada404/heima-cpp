#include  <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;


class Person {
public:
	string name;
	int score;
public:
	Person(string name, int age) {
		this->name = name;
		this->score = score;
	}
};

void show_person(Person& p) {
	cout << "name: " << p.name << " , score: " << p.score << endl;
}


void show_all_person(vector<Person>& v_lst) {
	for (vector<Person>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		show_person(*it);

	}
}

void create_person_lst(vector<Person>& v_lst) {
	string name_pre = "ABCDE";
	for (int i = 0; i < 5; i++ ) {
		string name = "candidate";
		name += name_pre[i];
		int score = 0;
		Person p(name, score);
		v_lst.push_back(p);
	}
}

void create_score_for_preson(vector<Person>& v_lst) {
	for (vector<Person>::iterator it = v_lst.begin(); it != v_lst.end(); it++) {
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int _sum = 0;
		for (deque<int>::iterator dt = d.begin(); dt != d.end(); dt++) {
			_sum += *dt;
		}
		it->score = _sum / d.size();
	}
}

int main34() {
	vector<Person> v_lst;
	create_person_lst(v_lst);
	create_score_for_preson(v_lst);
	show_all_person(v_lst);
	return 0;
}