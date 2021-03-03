#include <iostream>
using namespace std;
//在父类中设定好要实现哪些东西

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
		cout << "1. 烧水" << endl;
	};
	virtual void Brew() {
		cout << "2. 倒茶叶" << endl;
	};
	virtual void PourInCup() {
		cout << "3. 倒入茶杯" << endl;
	};
	virtual void PutSomething() {
		cout << "4. 加入枸杞" << endl;
	};
};

// coffee
class Coffee : public AbstractDrink {
public:
	virtual void Boil() {
		cout << "1. 烧矿泉水" << endl;
	};
	virtual void Brew() {
		cout << "2. 导入咖啡" << endl;
	};
	virtual void PourInCup() {
		cout << "3. 倒入咖啡杯" << endl;
	};
	virtual void PutSomething() {
		cout << "4. 加入牛奶" << endl;
	};
};


int main474() {
	Tea t;
	t.show_process();

	Coffee cf;
	cf.show_process();


	return 0;
}