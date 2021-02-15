#pragma once
#include <iostream>
#include "Contacts.h"
#include "Person.h"
#include "person_ops.h"

void show_contacts(const Contacts* con);
void add_person(Contacts* con);
int exist_person(const Contacts* con, string name);
void delete_person(Contacts* con, string name);
void find_person(const Contacts* con, string name);
void modify_person(Contacts* con, string name);

Person collect_person_info();
void clean_contacts(Contacts* con);
