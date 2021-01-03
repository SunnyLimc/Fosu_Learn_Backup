#include <stdio.h>

int main()
{
    int i, j, k, array[20], jSum, oSum, jCnt, oCnt, jArray[20], oArray[20];

    //输入数列
    for (i = 1; i <= 20; i++)
    {
        scanf("%d", &array[i]);
    }

    //分离奇偶数
    for (i = 1, j = 1, k = 1, jSum = 0, oSum = 0, jCnt = 0, oCnt = 0; i <= 20; i++)
    {
        if (array[i] % 2 == 0)
        {
            oArray[j] = array[i];
            j++;
            oSum += array[i];
            oCnt++;
        }
        else
        {
            jArray[k] = array[i];
            k++;
            jSum += array[i];
            jCnt++;
        }
    }

    //打印奇数结果
    for (i = 1; i <= jCnt; i++)
    {
        printf("%d ", jArray[i]);
    }
    printf("%.2lf\n", (double)jSum / jCnt);

    //打印偶数结果
    for (i = 1; i <= oCnt; i++)
    {
        printf("%d ", oArray[i]);
    }
    printf("%.2lf\n", (double)oSum / oCnt);

    return 0;
}