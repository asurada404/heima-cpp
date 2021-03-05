#pragma once
#include "woker.h"

class Manager : public Woker
{
public:

	Manager(string name, int id, int d_id);
	virtual string get_department_name();

	virtual void show_info();


};

