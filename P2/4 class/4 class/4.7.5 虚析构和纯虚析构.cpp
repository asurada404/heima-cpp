#include <iostream>
using namespace std;

/*
虚析构和纯虚析构都是为了解决父类指针释放子类对象的问题
纯虚析构的类属于抽象类
*/

// 虚析构
class Bottle {
public:
	Bottle() {
		cout << "Bottle construct function" << endl;
	}
	virtual ~Bottle() {  // 通过父类的指针释放子类在堆区开辟的内容
		cout << "Bottle destruct function" << endl;
	}
};


class SubBottle : public Bottle {
public:
	int* size;
public:
	SubBottle(int a) {
		size = new int(a);
		cout << "sub bottle construct function." << endl;
	}
	~SubBottle() {
		if (this->size != NULL) {
			delete size;
			size = NULL;
		}
		cout << "sub bottle destruct function." << endl;
	}
};

// 纯虚析构

class Calendar {
public:
	Calendar() {
		cout << "Calendar construct function" << endl;
	}
	virtual ~Calendar() = 0; // 纯虚析构
};

Calendar::~Calendar() {
	{  
		cout << "Calendar destruct function" << endl;
	}
}

class SubCalendar : public Calendar {
public:
	int* size;
public:
	SubCalendar(int s) {
		size = new int(s);
	}
	~SubCalendar() {
		if (this->size != NULL) {
			delete size;
			size = NULL;
		}
		cout << "SubCalendar析构" << endl;
	}
};

int main475() {
	//SubBottle sb(10);
	cout << "---------------" << endl;
	Bottle* b = new SubBottle (10);
	delete b;

	Calendar* cal = new SubCalendar(20);
	delete cal;
	
	return 0;
}