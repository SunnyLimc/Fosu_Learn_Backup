#ifndef _homework_2_27_
#define _homework_2_27_

#include <iostream>
class Homework_2_27
{
public:
    Homework_2_27()
    {
        int mark;
        std::cout << "你考了多少分";
        scanf_s("%d", &mark, 10);
        switch (mark / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("差");
            break;
        case 6:
        case 7:
            printf("中");
            break;
        case 8:
            printf("良");
            break;
        case 9:
        case 10:
            printf("好");
            break;
        }
    }
};

#endif