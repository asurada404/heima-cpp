#pragma once
#include <iostream>
#include <string>
#include "student.h"

struct Teacher {
	int id;
	std::string name;
	int age;
	int room_id;
	struct student stu;
};
