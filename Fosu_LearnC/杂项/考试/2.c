#include <stdio.h>
int main()
{
    int n, i, j, tmpCnt, cnt = 0, flag = 0;
    scanf("n=%d", &n);
    for (i = ; i <= n; i++)
    {
        flag = 0;
        tmpCnt = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j != 0)
                tmpCnt++;
        }
        if (tmpCnt == i - 2)
        {
            printf("%-5d", i);
            flag = 1;
            cnt++;
        }
        if (cnt % 10 == 0 && flag == 1)
        {
            printf("\n");
            flag == 0;
        }
    }
    printf("\n%d", cnt);
    return 0;
}
