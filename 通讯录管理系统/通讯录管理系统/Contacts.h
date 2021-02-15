#pragma once
#include <iostream>
#include <string>
#include "Person.h"

#define Max_Person 1000

struct Contacts {
	Person person_lst[Max_Person];
	int m_size = 0;

};