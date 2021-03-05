#include <iostream>
#include <string>

#include "workManager.h"
#include "woker.h"
#include "employee.h"
#include "Manager.h"
#include "Boss.h"

using namespace std;


// test employee
void test_employee() {
	Employee ee("Jack", 122, 233);
	ee.show_info();
}


// test manager
void test_manager() {
	Manager  mm("XY", 1222, 1233);
	mm.show_info();
}

// test boss
void test_boss() {
	Boss  bb("BOSSSS", 0001, 01);
	bb.show_info();
}

// test ¶àÌ¬

void test01()
{
	Woker* w = new Employee("ksk", 122, 12);
	w->show_info();
	delete w;
	w = new Manager("mm", 12, 2);
	w->show_info();
	delete w;
	w = new Boss("bb", 1, 1);
	w->show_info();
	delete w;
	w = NULL;
}



int main() {

	workManager wm;
	int choice = 0;
	while (true) {
		wm.show_mean();
		cout << "enter your choice." << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: // exist
			wm.exist();
		case 1: // add new woker
			cout << "add new worker" << endl;
			wm.add_emp();
		case 2: // show woker info
			wm.show_all_emp();
			break;
		case 3: // delete woker
			wm.delete_emp();
		case 4: // change woker info
			break;
		case 5: // search woker
			wm.find_emp();
			break;
		case 6: // sorted by woker number 
			wm.sort_emp();
			break;
		case 7: // delete all records
			wm.delete_all();
			break;

		default:
			break;
		}
	}
	



	return 0;
}