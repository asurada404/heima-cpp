#include "Boss.h"
#include <string>

Boss::Boss(string name, int id, int d_id) {
	this->name = name;
	this->id = id;
	this->department_id = d_id;
}


string Boss::get_department_name()// return depatment name
{
	return string("Boss");
};

void Boss::show_info() // show personal info
{
	cout << "Number : " << this->id;
	cout << "\t Name: " << this->name;
	cout << "\t Department: " << this->get_department_name();
	cout << "\t Duty: " << "allocate the woker to manager." << endl;


}


