// 将一个5*5的矩阵中最大的元素放中间，4个角放最小的元素
// 因为自己的傻逼而学会简单的递归
#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int *matchf(int n, int a[][5], int matchCnt, int match[])
{
    int x, y;
    y = n % 5;
    x = n / 5;
    int *p = &a[x][y];
    for (int i = 0; i < matchCnt; i++)
    {
        if (a[x][y] == match[i])
            p = matchf(n - 1, a, matchCnt, match);
    }
    return p;
}
int main()
{
    int a[5][5], *p[4], *q;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    q = &a[0][0];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (a[i][j] > *q)
                q = &a[i][j];
    int hasMin;
    for (int i = 0; i < 4; i++)
    {
        hasMin = 0;
        p[i] = &a[0][0];
        for (int j = 0; j < 5; j++)
        {
            if (hasMin)
                break;
            for (int k = 0; k < 5; k++)
                if ((i == 0 && a[j][k] < *p[i]) || (i != 0 && a[j][k] > *p[i - 1]))
                {
                    p[i] = &a[j][k];
                    hasMin = 1;
                    break;
                }
        }
    }
    int match[5], *tmp;
    match[0] = *p[0];
    match[1] = *p[1];
    match[2] = *p[2];
    match[3] = *p[3];
    match[4] = *q;
    if (a[2][2] != *q)
    {
        tmp = matchf(24, a, 5, match);
        swap(tmp, &a[2][2]);
        swap(&a[2][2], q);
    }
    if (a[0][0] != *p[0])
    {
        tmp = matchf(24, a, 5, match);
        swap(tmp, &a[0][0]);
        swap(&a[0][0], p[0]);
    }
    if (a[0][4] != *p[1])
    {
        tmp = matchf(24, a, 5, match);
        swap(tmp, &a[0][4]);
        swap(&a[0][4], p[1]);
    }
    if (a[4][0] != *p[2])
    {
        tmp = matchf(24, a, 5, match);
        swap(tmp, &a[4][0]);
        swap(&a[4][0], p[2]);
    }
    if (a[4][4] != *p[3])
    {
        tmp = matchf(24, a, 5, match);
        swap(tmp, &a[4][4]);
        swap(&a[4][4], p[3]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}