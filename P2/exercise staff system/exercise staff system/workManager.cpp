#include "workManager.h"
#include "woker.h"
#include "Boss.h"
#include "employee.h"
#include "Manager.h"

workManager::workManager() {
	cout << "workManager constrcut function" << endl;
	this->emp_num = 0;
	this->emp_array = NULL;
	this->load_emp();

}

workManager::~workManager() {
	cout << "workManager destrcut function" << endl;
	if (this->emp_array != NULL) {
		delete[] this->emp_array;
	}

}

void workManager::show_mean() {
	cout << "********************************************" << endl;
	cout << "********* 欢迎使用职工管理系统！ **********" << endl;
	cout << "************* 0.退出管理程序 *************" << endl;
	cout << "************* 1.增加职工信息 *************" << endl;
	cout << "************* 2.显示职工信息 *************" << endl;
	cout << "************* 3.删除离职职工 *************" << endl;
	cout << "************* 4.修改职工信息 *************" << endl;
	cout << "************* 5.查找职工信息 *************" << endl;
	cout << "************* 6.按照编号排序 *************" << endl;
	cout << "************* 7.清空所有文档 *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void workManager::exist() {
	cout << "byebye " << endl;
	exit(0);
}

void workManager::add_emp() {
	cout << "please enter the number of new employees: " << endl;
	int new_emp_num = 0;
	cin >> new_emp_num;
	if (new_emp_num > 0) {
		int newsize = this->emp_num + new_emp_num;
		// 开辟新的空间
		Woker** new_emp_array = new Woker*[newsize];
		if (this->emp_num > 0) {
			for (int i = 0; i < this->emp_num; i++) {
				new_emp_array[i] = this->emp_array[i];
			}
		}
		// add new employes;
		for (int i = 0; i < new_emp_num; i++) {
			int id;
			string name;
			int d_id;
			cout << "please enter the " << i + this->emp_num << "-th employee's information:" << endl;
			cout << "name:" << endl;
			cin >> name;
			cout << "id " << endl;
			cin >> id;
			cout << "department id : " << endl;
			cin >> d_id;

			cout << "请选择岗位" << endl;
			cout << "1. boss" << endl << "2. manager " << endl << "3. employee" << endl;
			int d_choice;
			cin >> d_choice;
			Woker* w = NULL;
			switch (d_choice) {
			case 1:
				w = new Boss(name, id, d_id);
				break;
			case 2:
				w = new Manager(name, id, d_id);
				break;
			case 3:
				w = new Employee(name, id, d_id);
				break;
			default:
				break;
			}
			new_emp_array[i + this->emp_num] = w;
		}
		
		this->emp_num = newsize;
		this->emp_array = new_emp_array;
		// save to file
		this->save_emp();
		cout << "add new " << new_emp_num << "employee(s)" << endl;
		this->file_is_empty = false;
	}

	else {
		cout << "input error!" << endl;
	}


}


void workManager::save_emp() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->emp_num; i++) {
		ofs << this->emp_array[i]->name << " "
			<< this->emp_array[i]->id << " "
			<< this->emp_array[i]->department_id << endl;
	}
	ofs.close();
}

void workManager::load_emp() {

	ifstream ifs;
	ifs.open(FILENAME, ios::in);


	// file not exist.
	if (! ifs.is_open()) {
		cout << "file not exist!!!" << endl;
		this->emp_num = 0;
		this->emp_array = NULL;
		this->file_is_empty = true;
	}
	else {
		char ch;
		ifs >> ch;
		//file exist but empty
		if (ifs.eof()) {
			cout << "file exist but empty!!!" << endl;
			this->emp_num = 0;
			this->emp_array = NULL;
			this->file_is_empty = true;
		}
		//file exist and not empty
		else {
			int num = this->get_emp_num();
			this->emp_num = num;
			cout << num << " employess in db." << endl;
			this->emp_array = new Woker * [num];
			string name;
			int id;
			int d_id;
			ifstream ifs;
			Woker  * w = NULL;
			ifs.open(FILENAME, ios::in);
			for (int i = 0; i < num; i++) {
				ifs >> name && ifs >> id && ifs >> d_id;
				switch (d_id) {
				case 1:// boss
					w = new Boss(name, id, d_id);
					break;
				case 2:// manager
					w = new Manager(name, id, d_id);
					break;
				case 3:// employee
					w = new Employee(name, id, d_id);
					break;
				default:
					break;
				}
				this->emp_array[i] = w;
			}
			this->show_all_emp();
			
		}


	}
	ifs.close();
}

int workManager::get_emp_num() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	int d_id;
	string name;
	int num = 0;
	while (ifs >> name && ifs >> id && ifs >> d_id) {
		num++;
	}
	ifs.close();
	return num;

}

void workManager::show_all_emp() {
	if (this->emp_num < 1) {
		cout << "no record." << endl;
		return;
	}
	for (int i = 0; i < this->emp_num; i++) {
		this->emp_array[i]->show_info();
	}
}

bool workManager::find_emp() {
	bool found = false;
	if (this->emp_num < 1) {
		cout << "no record" << endl;
	}
	else {
		cout << "1. 按照id查找" << endl;
		cout << "2. 按照name查找 " << endl;
		int select;
		cin >> select;
		if (select == 1) {
			cout << "enter id " << endl;
			int id;
			cin >> id;
			for (int i = 0; i < this->emp_num; i++) {
				if (this->emp_array[i]->id == id) {
					cout << "found !!" << endl;
					this->emp_array[i]->show_info();
					found = true;
					return found;
				}
			}
			cout << "not found " << endl;
		}
		else if (select == 2) {
		
			cout << "enter name " << endl;
			string name;
			cin >> name;
			for (int i = 0; i < this->emp_num; i++) {
				if (this->emp_array[i]->name == name) {
					cout << "found !!" << endl;
					this->emp_array[i]->show_info();
					found = true;
					return found;
				}
			}
			cout << "not found " << endl;
		}

	return found;

	};

}


void workManager::delete_emp() {
	if (this->emp_num < 1) {
		cout << "no record" << endl;
	}
	else {
		int id;
		cout << "enter the id " << endl;

		cin >> id;
		int index = id_exist(id);
		cout << "index " << index << endl;
		if (index != -1) {
			cout << "found" << endl;
			for (int i = index; i < this->emp_num - 1; i++) {
				this->emp_array[i] = this->emp_array[i + 1];
			}
			this->emp_num = this->emp_num - 1;
			this->save_emp();
			cout << "delete successful." << endl;
		}
		else {
			cout << "not found" << endl;
		}

	}

}


int workManager::id_exist(int id) {
	int index = -1;
	for (int i = 0; i < this->emp_num; i++) {
		if (this->emp_array[i]->id == id) {
			return i;
		}
	}
	return index;
}


void workManager::delete_all() {
	cout << "are you sure to delete all?" << endl;
	cout << "1. continue" << endl;
	cout << "2. back" << endl;
	int sel;
	cin >> sel;
	if (sel == 1) {
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);
		ofs.close();
		if (this->emp_array != NULL) {
			for (int i = 0; i < this->emp_num; i++) {
				if (this->emp_array[i] != NULL) {
					delete this->emp_array[i];
				}
			}
		}
		this->emp_num = 0;
		delete[] this->emp_array;
		this->emp_array = NULL;
		this->file_is_empty = true;
		cout << "Finish delete." << endl;
		return;
	}
	else {
		return;
	}
}


void workManager::sort_emp() {
	cout << "选择排序方式" << endl;
	cout << "1. ascending " << endl;
	cout << "2. descending "  << endl;
	int sel;
	cin >> sel;
	for (int i = 0; i < this->emp_num; i++) {
		int min_max = i;
		for(int j = i+1; j < this->emp_num; j++)
			if (sel == 1) {
				if (this->emp_array[j]->id < this->emp_array[min_max]->id) {
					min_max = j;
				}
			}
			else {
				if (this->emp_array[j]->id > this->emp_array[min_max]->id) {
					min_max = j;
				}

			};
		if (i != min_max) {
			Woker* tmp = this->emp_array[i];
			this->emp_array[i] = this->emp_array[min_max];
			this->emp_array[min_max] = tmp;
		}
	}


	this->show_all_emp();
	this->save_emp();
}