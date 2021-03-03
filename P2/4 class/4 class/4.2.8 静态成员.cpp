#include <iostream>

using namespace std;

class Water
{
public:
	static int spub1;
	static void static_fun() {
		cout << " static function " << endl;
		spub1 = 1221;
	}
private:
	static int spri2;


};

int Water::spub1 = 10;
int Water::spri2 = 100;

int main428() {
	Water::spub1 = 100;
	// 通过类名访问
	cout << Water::spub1 << endl;
	// cout << Water::spri2 << endl; 不可以这样访问
	// 通过对象访问
	Water w1;
	cout << w1.spub1 << endl;
	w1.spub1 = 11100;
	cout << w1.spub1 << endl;
	
	w1.static_fun();
	cout << w1.spub1 << endl;

	Water::static_fun();
	return 0;
}