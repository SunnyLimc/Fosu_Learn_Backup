#include "29.h"
#define start 1
#define end 100

void homework_2_29_main(){
	Homework_2_29 hw(start,end);
	std::vector <int> res=  hw.getRes();
	for (unsigned int i = 0; i < res.size(); i++) {
		std::cout << res[i] << std::endl;
	}
	std::cout << "Total is£º" << res.size() << std::endl;
}
