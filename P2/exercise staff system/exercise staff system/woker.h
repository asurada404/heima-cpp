#pragma once
#include <iostream>
#include <string>
using namespace std;


class Woker
{
public:
	string name;
	int id;
	int department_id;
public:
	virtual string get_department_name() = 0; // return depatment name
	virtual void show_info() = 0; // show personal info
};

