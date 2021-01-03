#include <stdio.h>
int main()
{
    int a[100], cnt, i = 0, j, tmp;
    do
    {
        scanf("%d", &a[i]);
        i++;
    } while (getchar() != '\n');
    cnt = i;
    for (i = 0; i < cnt; i++)
    {
        tmp = a[i];
        for (j = i; j < cnt; j++)
        {
            if (a[j] < tmp)
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    for (i = 0; i < cnt; i++)
    {
        printf("%d ", a[i]);
    }
}