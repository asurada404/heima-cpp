#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;


class Circle {
public :
	int m_r;

	double calculate_area() {
		return 2 * PI * m_r;
	}
};

// 在设计类的时候，属性和行为写在一起，表现事物
class Student {
public:
	string m_name;
	string m_id;

public:
	void set_name(string name) {
		m_name = name;
	}

	void set_id(string id) {
		m_id = id;
	}

	void show_info() {
		cout << "name: " << m_name << endl;
		cout << "id :  " << m_id << endl;
	}
};

// 类在设计时，可以把属性和行为放在不同的权限下，加以控制

class Person {
public:
	string name;

protected:
	string car_id;

private:
	int m_passwd;

public:
	void func() {
		name = "jack";
		car_id = "1233";
		m_passwd = 1234;
	}

};


///struct 和class的区别
struct S1 {
	int name;
};


class C1 {
	int name;
};


// 将所有的成员属性设置为私有，可以自己控制读写权限

class People {

public:
	void set_name(string name) {
		m_name = name;
	}
	string get_name() {
		return m_name;
	}

	void set_age(int age) {
		m_age = age;
	}

	int get_age() {
		return m_age;
	}

	void set_passwd(int passwd) {
		m_passwd = passwd;
	}


private:
	string m_name;
	int m_age;
	string m_passwd;

};

int main41() {
	Circle c1;
	c1.m_r = 10;
	cout << c1.calculate_area() << endl;

	Student s1;
	s1.m_name = "jack";
	s1.m_id = "123";
	s1.show_info();

	s1.set_name("name1");
	s1.set_id("122321");
	s1.show_info();


	Person p1;
	p1.name = "jack";
	// p1.car_id
	// p1.m_passwd

	S1 s11;
	s11.name = 10; // struct 默认是public

	C1 c11;
	//c11.name;  class 默认是private的


	People peo;
	peo.set_name("kahion");
	cout << peo.get_name() << endl;
	peo.set_age(20);
	cout << peo.get_age() << endl;


	return 0;
}