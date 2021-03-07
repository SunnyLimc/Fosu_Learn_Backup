// 可以，具体见代码
#ifndef _homework_2_10_
#define _homework_2_10_

#include <iostream>
class Homework_2_10 {
public:
    Homework_2_10() {
        int a, b, c;
        for (a = 1, b = 5, c = 5; a < 10;)
        {
            printf("%d %d %d\n", a++, b, c);
        }
    }
};

#endif