#ifndef _homework_2_18_
#define _homework_2_18_

#include <iostream>
class Homework_2_18 {
public:
    Homework_2_18() {
        for (int i = 32; i <= 127; i++)
        {
            // printf("%c", i);
            std::cout << char(i) << " ";
        }
    }
};

#endif