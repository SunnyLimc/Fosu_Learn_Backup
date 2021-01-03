#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    //初始化求数变量
    int numL1, numL2, i, targetNum, num1[100], num2[100];
    char target[100];
    //其他变量
    int n;
    int x, y, powy;
    //写入
    scanf("%d", &n);
    for (x = 1; x < n; x++)
    {
        //求数的分解
        memcpy(&x, target, sizeof(int));
        targetNum = atoi(target);
        numL1 = strlen(target);
        for (i = numL1; i != 0; i--)
        {
            num1[i] = (int)((targetNum / (int)pow(10, (i - 1))) % 10);
        }
        printf("1,%d\n", x);
        for (y = 1; y < sqrt(n); y++)
        {
            powy = pow(y, y);
            memcpy(&powy, target, sizeof(int));
            targetNum = atoi(target);
            numL2 = strlen(target);
            for (i = numL2; i != 0; i--)
            {
                num2[i] = (int)((targetNum / (int)pow(10, (i - 1))) % 10);
            }
            if (num1[1] == num2[1])
            {
                printf("%d", i);
            }
            printf("2,%d\n", y);
        }
    }
}