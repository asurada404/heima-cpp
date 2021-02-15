#include <iostream>
#include <string>
#include "Person.h"
#include "person_ops.h"

void show_person(const Person* p) {
	cout << "name: " << p->name << "; gender: " << p->gender << "; age:" << p->age;
	cout << "; phone: " << p->phone << "; address: " << p->address << endl;
}

