#pragma once
#include <iostream>
#include <string>
using namespace std;

class Phone
{
public: 
	std::string name;
public:
	Phone() {
		cout << "Ĭ����������" << endl;
	}
	Phone(std::string a_name) {
		name = a_name;
	}
};

