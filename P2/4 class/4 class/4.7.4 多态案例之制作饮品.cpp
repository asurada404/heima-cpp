#include <iostream>
using namespace std;
//�ڸ������趨��Ҫʵ����Щ����

class AbstractDrink {
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	void show_process() {
		this->Boil();
		this->Brew();
		this->PourInCup();
		this->PutSomething();
	}
};

// tea
class Tea : public AbstractDrink {
public:
	virtual void Boil() {
		cout << "1. ��ˮ" << endl;
	};
	virtual void Brew() {
		cout << "2. ����Ҷ" << endl;
	};
	virtual void PourInCup() {
		cout << "3. ����豭" << endl;
	};
	virtual void PutSomething() {
		cout << "4. �������" << endl;
	};
};

// coffee
class Coffee : public AbstractDrink {
public:
	virtual void Boil() {
		cout << "1. �տ�Ȫˮ" << endl;
	};
	virtual void Brew() {
		cout << "2. ���뿧��" << endl;
	};
	virtual void PourInCup() {
		cout << "3. ���뿧�ȱ�" << endl;
	};
	virtual void PutSomething() {
		cout << "4. ����ţ��" << endl;
	};
};


int main474() {
	Tea t;
	t.show_process();

	Coffee cf;
	cf.show_process();


	return 0;
}