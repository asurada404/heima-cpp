#include <iostream>
using namespace std;

int main1() {

	/*
	
	int score = 0;
	cout << "please enter your score:" << endl;
	cin >> score;
	if (score > 600) {
		cout << "you score is very high!";
	}
	else if (score > 500) {
		cout << "you are in middle level.";
	}
	else {
		cout << "you score is very low ):";
	}
	*/
	/*
	提示用户输入一个高考考试分数，根据分数做如下判断
	分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
	在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
	*/

	int score = 0;
	cout << "please enter your score:" << endl;
	cin >> score;
	if (score > 600) {
		cout << "你考上了一本!" << endl;
		if (score > 700) {
			cout << "你考上了北大。" << endl;
		}
		else if (score > 650) {
			cout << "你考上了清华。" << endl;
		}
		else {
			cout << "你考上了人大。" << endl;
		}
	}
	else if (score > 500) {
		cout << "你考上了二本!" << endl;
	}
	else if (score > 400) {
		cout << "你考上了三本！" << endl;
	}
	else {
		cout << "你没有考上本科。" << endl;
	}

	double weightA = 0.0, weightB = 0.0, weightC = 0.0;
	cout << "输入小猪A的体重： " << endl;
	cin >> weightA;
	cout << "输入小猪B的体重： " << endl;
	cin >> weightB;
	cout << "输入小猪C的体重： " << endl;
	cin >> weightC;
	
	if (weightA > weightB) {
		if (weightA > weightC) {
			cout << "小猪A最重。" << endl;
		}
		else {
			cout << "小猪C最重。" << endl;
		}
	}
	else {
		if (weightB > weightC) {
			cout << "小猪B最重。" << endl;
		}
		else {
			cout << "小猪C最重。" << endl;
		}
	}


	return 0;
}
