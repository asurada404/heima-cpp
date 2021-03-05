#pragma once
#include "woker.h"

class Boss:public Woker
{
public:
	Boss(string name, int id, int d_id);
	virtual string get_department_name();
	virtual void show_info();
};

