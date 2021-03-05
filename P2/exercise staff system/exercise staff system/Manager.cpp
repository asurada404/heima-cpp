#include <string>
#include "Manager.h"



Manager::Manager(string name, int id, int d_id) {
	this->name = name;
	this->id = id;
	this->department_id = id;
}


string Manager::get_department_name() {
	return string("Manager");
};

void Manager::show_info() {
	cout << "Number : " << this->id;
	cout << "\t Name: " << this->name;
	cout << "\t Department: " << this->get_department_name();
	cout << "\t Duty: " << "finish the woker got from boss and allocate to employees." << endl;


};
