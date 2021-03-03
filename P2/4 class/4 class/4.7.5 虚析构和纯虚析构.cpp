#include <iostream>
using namespace std;

/*
�������ʹ�����������Ϊ�˽������ָ���ͷ�������������
���������������ڳ�����
*/

// ������
class Bottle {
public:
	Bottle() {
		cout << "Bottle construct function" << endl;
	}
	virtual ~Bottle() {  // ͨ�������ָ���ͷ������ڶ������ٵ�����
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

// ��������

class Calendar {
public:
	Calendar() {
		cout << "Calendar construct function" << endl;
	}
	virtual ~Calendar() = 0; // ��������
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
		cout << "SubCalendar����" << endl;
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