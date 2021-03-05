#include "employee.h"
#include <string>
Employee::Employee(string name, int id, int d_id) {
	this->name = name;
	this->id = id;
	this->department_id = d_id;
};

Employee::~Employee() {

};


string Employee::get_department_name()// return depatment name
{
	return string("∆’Õ®‘±π§");
};

void Employee::show_info() // show personal info
{
	cout << "Number : " << this->id;
	cout << "\t Name: " << this->name;
	cout << "\t Department: " << this->get_department_name();
	cout << "\t Duty: " << "finish the woker got from manager." << endl;


}
