#include "loto.h"

int CLoto::random(int timp) {
	srand(timp);
	int x = (rand() % 48) + 1;
	return x;
}

void CLoto::initializare_bile() {
	for (int i = 0;i < 49;i++) {
		bile[i].set_nr_asociat(i+1);
	}
}

void CLoto::extragere() {
	for (int i = 0;i < 6;i++) {
		int x = random(i);
		bile[x].set_stare_curenta(true);
		cout << bile[x].get_nr_asociat() << "(" << bile[x].get_stare_curenta() << ")" << " ";
	}
}
