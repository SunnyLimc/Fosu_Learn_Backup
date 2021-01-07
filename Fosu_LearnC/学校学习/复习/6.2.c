//用选择法对10个整数进行排序
#include <stdio.h>
int main()
{
    int a[3], min;
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++)
    {
        min = i;
        for (int j = i + 1; j < 3; j++)
            if (a[j] < a[min])
                min = j;
        if (min != i)
        {
            a[min] += a[i];
            a[i] = a[min] - a[i];
            a[min] = a[min] - a[i];
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%d ", a[i]);
}
