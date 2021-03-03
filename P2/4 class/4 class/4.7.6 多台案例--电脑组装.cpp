#include <iostream>
#include <string>
using namespace std;

class CPU {
public:
	virtual void func() {
		cout << "CPU ready." << endl;
	}
};

class Memory {
public:
	virtual void func() {
		cout << "Memory ready." << endl;
	}
};

class DisplayCard {
public:
	virtual void func() {
		cout << "DisplayCard ready." << endl;
	}
};


class IntelCPU :public CPU {
public:
	virtual void func() {
		cout << "Intel CPU ready." << endl;
	}
};

class DZMemory :public Memory {
public:
	virtual void func() {
		cout << "DZMemory ready." << endl;
	}
};
class AMDDisplayCard :public DisplayCard {
public:
	virtual void func() {
		cout << "AMDDisplayCard ready." << endl;
	}
};


class WorkStation {
public:
	WorkStation(CPU* cp, Memory* men,  DisplayCard* dc) {
		this->cp = cp;
		this->men = men;
		this->dc = dc;
	}
	void work_read() {
		cp->func();
		men->func();
		dc->func();

	}
public:
	CPU* cp;
	Memory* men;
	DisplayCard* dc;

};

int main476() {
	CPU* cp = new IntelCPU;
	Memory* men = new DZMemory;
	DisplayCard* dc = new AMDDisplayCard;


	WorkStation ws(cp, men, dc);
	
	ws.work_read();

	IntelCPU intelcpu;
	WorkStation ws2(&intelcpu, men, dc);
	ws2.work_read();

	return 0;
}