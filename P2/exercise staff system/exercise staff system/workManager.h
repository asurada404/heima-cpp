#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "woker.h"

#define FILENAME "empfile.txt"

using namespace std;



class workManager
{
public:
	int emp_num;
	Woker** emp_array;
	bool file_is_empty;

public:
	workManager();
	void show_mean();
	void exist();

	void add_emp();
	void save_emp();
	void load_emp();
	int get_emp_num();
	void show_all_emp();
	bool find_emp();
	void delete_emp();
	int id_exist(int id);
	void delete_all();
	void sort_emp();
	~workManager();

};

