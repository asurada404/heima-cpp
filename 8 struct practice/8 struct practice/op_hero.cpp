#include <iostream>
#include "Hero.h"
#include "op_hero.h"
using namespace std;

void print_hero(Hero* h) {
	cout << "name: " << h->name << ", age: " << h->age << ", gender: " << h->gender << endl;
}


void print_heros(Hero* h_lst, int len) {
	for (int i = 0; i < len; i++) {
		print_hero(h_lst++);
	}
}

void bubble_sort_heros(Hero* h_lst, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (h_lst[j].age > h_lst[j + 1].age) {
				Hero tmp = { h_lst[j].name, h_lst[j].age, h_lst[j].gender };
				h_lst[j] = h_lst[j + 1];
				h_lst[j + 1] = tmp;

			}
		}
	}
}