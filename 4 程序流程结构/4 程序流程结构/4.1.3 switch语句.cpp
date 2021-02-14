#include <iostream>
using namespace std;


/*
switch (整型/字符型)
*/

/*
//请给电影评分
//10 ~ 9 经典
// 8 ~ 7 非常好
// 6 ~ 5 一般
// 5分以下 烂片
*/

int main3() {
	int score = 0;
	cout << "please enter the score :" << endl;
	cin >> score;
	switch (score) {
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
	case 7:
		cout << "非常好" << endl;
		break;

	case 6:
	case 5:
		cout << "一般" << endl;

	default:
		cout << "烂片" << endl;
		break;
	
	}
	return 0;
	
};
