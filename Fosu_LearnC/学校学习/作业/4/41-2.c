#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    //用到了通用的解决办法
    int numL, i, targetNum, num[100];
    char target[100];
    scanf("%s", &target);
    targetNum = atoi(target);
    numL = strlen(target);
    for (i = numL; i != 0; i--)
    {
        num[i] = (int)((targetNum / (int)pow(10, (i - 1))) % 10);
    }
    //正式程序
    if (targetNum >= 10000 && targetNum < 100000)
    {
        if (num[1] == num[5] && num[2] == num[4])
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
        printf("Failure");
    return 0;
}
