#ifndef _homework_2_27_
#define _homework_2_27_

#include <iostream>
class Homework_2_27
{
public:
    Homework_2_27()
    {
        int mark;
        std::cout << "�㿼�˶��ٷ�";
        scanf_s("%d", &mark, 10);
        switch (mark / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("��");
            break;
        case 6:
        case 7:
            printf("��");
            break;
        case 8:
            printf("��");
            break;
        case 9:
        case 10:
            printf("��");
            break;
        }
    }
};

#endif