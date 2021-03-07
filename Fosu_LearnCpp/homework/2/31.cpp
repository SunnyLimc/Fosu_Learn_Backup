#include "31.h"

void homework_2_31_main() {
	std::cout << "input sec,min,hour,day,mon,year pre-line"<<std::endl;
	int s, m, h, d, mo, y;
	std::cin >> s;
	std::cin >> m;
	std::cin >> h;
	std::cin >> d;
	std::cin >> mo;
	std::cin >> y;
	Homework_2_31 tm(s,m,h,d,mo,y);
	tm.printTm();
}