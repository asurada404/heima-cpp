#include <iostream>
#include <string>
#include "Hero.h"
#include "op_hero.h"

using namespace std;
int main() {
	Hero h1 = { "liubei", 67, "man" };
	print_hero(&h1);

	Hero h_lst[] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(h_lst) / sizeof(h_lst[0]);
	print_heros(h_lst, len);

	
	bubble_sort_heros(h_lst, len);
	cout << "after sorted: " << endl;
	print_heros(h_lst, len);

	return 0;
}