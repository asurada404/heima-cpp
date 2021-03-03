#pragma once
#include <iostream>
using namespace std;

class Horse
{
public:
	double size;
public:
	Horse(const Horse& h) {
		size = h.size;
	}
};

