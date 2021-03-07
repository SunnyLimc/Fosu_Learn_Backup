#ifndef _homework_2_14_
#define _homework_2_14_

#include <iostream>
class Homework_2_14
{
public:
Homework_2_14()
{
    int x, y;
    scanf_s("%d%d", &x, &y, 10);
    if (x > y)
    {
        x ^= y;
        y ^= x;
        printf("%d", y);
    }
    else
    {
        y ^= x;
        x ^= y;
        printf("%d", x);
    }
}
};

#endif