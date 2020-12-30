// 用选择法对10个整数排序
#include <stdio.h>
#define N 50000
int main()
{
    int index, i, j, tmp, a[N];
    for (i = 0; i < N; i++)
    {
        a[i] = i;
    }
    for (i = 0; i < N - 1; i++)
    {
        index = i;
        for (j = i + 1; j < N; j++)
        {
            if (a[j] > a[index])
                index = j;
        }
        tmp = a[index];
        a[index] = a[i];
        a[i] = tmp;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}