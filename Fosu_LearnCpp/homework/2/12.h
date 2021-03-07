#ifndef _homework_2_12_
#define _homework_2_12_

#include <iostream>
class Homework_2_12 {
public:
    Homework_2_12()
    {
        for (int n = 100; n <= 200; n += 2)
        {
            std::cout << n << std::endl;
        }
        printf("\n");
        int n = 100;
        while (n <= 200)
        {
            std::cout << n << std::endl;
            n += 2;
        }
        printf("\n");
        n = 100;
        do
        {
            std::cout << n << std::endl;
            n += 2;
        } while (n <= 200);
    }
};

#endif