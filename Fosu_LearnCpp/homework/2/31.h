#ifndef _homework_2_31_
#define _homework_2_31_

#include <iostream>

class Homework_2_31 {
private:
	struct Tm {
		int sec;
		int min;
		int hour;
		int day;
		int mon;
		int year;
	} tm;
public:
	Homework_2_31(int s = 0, int m = 0, int h = 0, int d = 1, int mo = 1, int y = 1970) {
		tm.sec = s;
		tm.min = m;
		tm.hour = h;
		tm.day = d;
		tm.mon = mo;
		tm.year = y;
	}
	void printTm(){
		std::cout << tm.year << "��" << tm.mon << "��" << tm.day << "��" << tm.hour << "ʱ" << tm.min << "��" << tm.sec << "��"<<std::endl;
	}
};

#endif