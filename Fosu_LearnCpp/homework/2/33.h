#ifndef _homework_2_33_
#define _homework_2_33_

#include <iostream>
class homework_2_33 {
private:
	enum Weekday
    {
        Sun = 1,
        Mon = 2,
        Tue = 3,
        Wed = 4,
        Thu = 5,
        Fri = 6,
        Sat = 7,
    };
public:
    homework_2_33()
    {
        Weekday workday = Sat;
        std::cout << workday;
        int a = workday;
        std::cout << a;
    }
};

#endif