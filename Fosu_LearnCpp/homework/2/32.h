#ifndef _homework_2_32_
#define _homework_2_32_

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Homework_2_32 {
private:
	int guessNum;
	int start, end;
	int compare(int num) {
		if (num < guessNum)
			return -1;
		if (num > guessNum)
			return 1;
		if (num == guessNum)
			return 0;
		return -2;
	}
	void random(int s,int e) {
		srand((unsigned int)time(NULL));
		guessNum = (rand() % (s-e))+ s;
	}
public:
	Homework_2_32(int s,int e):start(s),end(e) {
		random(start, end);
	}
	int guess(int i) {
		if (compare(i) == -1) {
			std::cout << "太小了" << std::endl;
			return 0;
		}
		else if (compare(i) == 1){
			std::cout << "太大了" << std::endl;
			return 0;
		}
		else if (compare(i) == 0)
			return 1;
		return 0;
	}
};

#endif