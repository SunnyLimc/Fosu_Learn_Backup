#include "32.h"
#define start 1
#define end 100

void homework_2_32_main() {
	Homework_2_32 game(1,100);
	int a;
	do {
		std::cin >> a;
	} while (!game.guess(a));
}
