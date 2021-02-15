#include <iostream>
#include <string>
#include "Person.h"
#include "Contacts.h"
#include "person_ops.h"
#include "contacts_ops.h"

using namespace std;

void show_help_info() {
	cout << "*******************" << endl;
	cout << "** 1. 添加联系人 **" << endl;
	cout << "** 2. 显示联系人 **" << endl;
	cout << "** 3. 删除联系人 **" << endl;
	cout << "** 4. 查找联系人 **" << endl;
	cout << "** 5. 修改联系人 **" << endl;
	cout << "** 6. 清空联系人 **" << endl;
	cout << "** 0. 退出通讯录 **" << endl;
	cout << "*******************" << endl;
}

int main() {
	/*unit test*/
	/*

	// test show_help_info();
	show_help_info();

	// test person
	Person p1;
	p1.name = "lucy";
	p1.gender = 1;
	p1.age = 20;
	p1.phone = "176 2212 3422";
	p1.address = "Center Stret";

	//test contact
	Contacts con;
	con.m_size = 1;
	con.person_lst[0] = p1;

	// test show person
	cout << "test show person function" << endl;
	show_person(&p1);

	// test show contacts function
	cout << "test show contacts function" << endl;
	con.m_size = 2;
	con.person_lst[1] = p1;
	show_contacts(&con);

	// test add new person to contact;
	// cout << "test add new person to contact: " << endl;
	// add_person(&con);
	// show_contacts(&con);


	// test exist function
	cout << "test exist function" << endl;
	cout << exist_person(&con, "lucy1") << endl;

	// test delete person function
	cout << "test delete person function" << endl;
	delete_person(&con, "lucy1");


	// test find function 
	cout << "test find person function" << endl;
	find_person(&con, "lucy");

	// test modify function 
	cout << "test modify person function" << endl;
	modify_person(&con, "lucy");
	show_contacts(&con);

	// test clean function 
	cout << "test clean contact function" << endl;
	clean_contacts(&con);
	show_contacts(&con);
	*/

	int cmd;
	Contacts con;
	string name;
	while (true) {
		show_help_info();
		cin >> cmd;
		switch (cmd) {
			// 1. add new person
		case 1:
			cout << "add new person" << endl;
			add_person(&con);
			break;

			// 2. show all person
		case 2:
			cout << "show all person" << endl;
			show_contacts(&con);
			break;

			// 3. delete person
		case 3:
			cout << "delete person" << endl;
			cout << " please enter the person name who you want to delete." << endl;
			cin >> name;
			delete_person(&con, name);
			break;
			// 3. delete person

		case 4:
			cout << "find person" << endl;
			cout << " please enter the person name who you want to find." << endl;
			cin >> name;
			find_person(&con, name);
			break;

		case 5:
			cout << "modify person" << endl;
			cout << " please enter the person name who you want to modify." << endl;
			cin >> name;
			modify_person(&con, name);
			break;

		case 6:
			cout << "clean contacts." << endl;
			clean_contacts(&con);
			break;

		case 0:
			cout << "exit contact;" << endl;
			return 0;
		}

	}
	

	return 0;
}