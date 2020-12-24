#include <stdio.h>

int main()
{
    int x, y, flag;
    scanf("%d,%d", &x, &y);
    if (x > 0 && y > 0)
        flag = 1;
    else if (x < 0 && y > 0)
        flag = 2;
    else if (x < 0 && y < 0)
        flag = 3;
    else if (x > 0 && y < 0)
        flag = 4;
    else
        flag = 0;
    switch (flag)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    case 0:
        printf("Failure");
    }
    return 0;
}