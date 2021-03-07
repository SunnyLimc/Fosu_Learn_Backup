#ifndef _homework_2_35_
#define _homework_2_35_

#include <iostream>

class homework_2_35 {
public:
	homework_2_35(int t) {
		for (int i = 1; i <= t; i++) {
			for (int j = 1; j <= i; j++) {
				std::cout << i << "*" << j << "=" << i * j << " " ;
			}
			std::cout << std::endl;
		}
	}
};

#endif