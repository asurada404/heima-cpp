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
		cout << "Ä¬ÈÏÎö¹¹º¯Êý" << endl;
	}
	Phone(std::string a_name) {
		name = a_name;
	}
};

