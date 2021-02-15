#include <iostream>
#include "Contacts.h"
#include "Person.h"
#include "person_ops.h"

using namespace std;

void show_contacts(const Contacts* con) {
	for (int i = 0; i < con->m_size; i++) {
		show_person(&(con->person_lst[i]));
	}
}


Person collect_person_info() {

	string name;
	int gender;
	int age;
	string phone;
	string address;
	//name
	cout << "Please enter name: " << endl;
	cin >> name;

	//gender
	cout << "Please enter gender(1: man, 2:woman): " << endl;
	while (true) {
		cin >> gender;
		if (gender == 1 || gender == 2) {
			break;
		}
		else {
			cout << "!!!input error, enter again." << endl;
		}
	}

	//age
	cout << "Please enter age: " << endl;
	cin >> age;

	//phone
	cout << "Please enter phone: " << endl;
	cin >> phone;

	//address
	cout << "Please enter address: " << endl;
	cin >> address;
	cout << endl;
	Person new_person;
	new_person.name = name;
	new_person.gender = gender;
	new_person.age = age;
	new_person.phone = phone;
	new_person.address = address;

	return new_person;

}

void add_person(Contacts* con) {
	// contacts full?
	if (con->m_size == Max_Person) {
		cout << "The contact is full." << endl;
		return;
	}
	else {
		Person new_person = collect_person_info();
		int current_size = con->m_size;
		// update contact
		con->m_size++;
		con->person_lst[current_size] = new_person;
		cout << " add successfully." << endl;

	}
}


int exist_person(const Contacts* con, string name) {
	for (int i = 0; i < con->m_size; i++) {
		if (con->person_lst[i].name == name)
			return i;
	}
	return -1;
}

void delete_person(Contacts* con, string name) {
	int search_res = exist_person(con, name);
	if ( search_res != -1 ){
		cout << name << " exist in contacts." << endl;
		for (int i = search_res; i < con->m_size - 1; i++) {
			con->person_lst[i] = con->person_lst[i + 1];
		}
		con->m_size--;
		return;
	}
	else {
		cout << name <<" doesn't exist in contacts." << endl;
		return;
	};
}

void find_person(const Contacts* con, string name) {
	int search_res = exist_person(con, name);
	if (search_res != -1) {
		cout << "found " << name << endl;
		show_person(&(con->person_lst[search_res]));
	}
	else {
		cout << "doesn't find " << name << endl;
	}
}

void modify_person(Contacts* con, string name) {
	int search_res = exist_person(con, name);
	if (search_res != -1) {
		cout << "found " << name << endl;
		Person new_person = collect_person_info();
		con->person_lst[search_res] = new_person;
	}
	else {
		cout << "doesn't find " << name << endl;
	}
}

void clean_contacts(Contacts* con) {
	con->m_size = 0;
	cout << "cleaned contacts." << endl;
}