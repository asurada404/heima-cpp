#include <iostream>
#include <string>
#include "Hero.h"
#include "op_hero.h"

using namespace std;
int main() {
	Hero h1 = { "liubei", 67, "man" };
	print_hero(&h1);

	Hero h_lst[] = {
		{"Áõ±¸",23,"ÄĞ"},
		{"¹ØÓğ",22,"ÄĞ"},
		{"ÕÅ·É",20,"ÄĞ"},
		{"ÕÔÔÆ",21,"ÄĞ"},
		{"õõ²õ",19,"Å®"},
	};
	int len = sizeof(h_lst) / sizeof(h_lst[0]);
	print_heros(h_lst, len);

	
	bubble_sort_heros(h_lst, len);
	cout << "after sorted: " << endl;
	print_heros(h_lst, len);

	return 0;
}