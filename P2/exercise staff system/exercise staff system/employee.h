#pragma once
#include "woker.h"

class Employee : public Woker
{
public:
	Employee(string name, int id, int d_id);
	~Employee();
	string get_department_name(); // return depatment name
	void show_info(); // show personal info
};

