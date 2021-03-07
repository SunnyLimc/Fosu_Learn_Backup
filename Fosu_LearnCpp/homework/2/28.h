#ifndef _homework_2_28_
#define _homework_2_28_

#include <iostream>
class Homework_2_28
{
private:

public:
    Homework_2_28()
    {
        int end = 0;
        while (end == 0)
        {
            char cnt;
            std::cout << "Menu: A(dd) D(elete) S(ort) Q(uit)" << std::endl;
            std::cin >> cnt;
            switch (cnt)
            {
            case 'A':
                std::cout << "数据已经增加" << std::endl;
                continue;
            case 'D':
                std::cout << "数据已经删除" << std::endl;
                continue;
            case 'S':
                std::cout << "数据已经排序" << std::endl;
                continue;
            case 'Q':
                end = 1;
                continue;
            }
        }
    }
};

#endif