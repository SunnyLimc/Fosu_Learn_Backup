#ifndef _homework_2_26_
#define _homework_2_26_

#include <iostream>
class Homework_2_26
{
public:
    Homework_2_26()
    {
        char cho;
        while (1)
        {
            printf("现在正在下雨吗？");
            scanf_s("%c", &cho,10);
            getchar();
            if (cho == 'Y')
            {
                printf("现在正在下雨");
                break;
            }
            else if (cho == 'N')
            {
                printf("现在没有下雨");
                break;
            }
        }
    }
};

#endif