#include <stdio.h>
int main()
{
    int n, i, a[50], f0, f1 = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] < a[i + 1])
        {
            f0 = 0;
            break;
        }
        else if (a[i] > a[i + 1])
        {
            f0 = 1;
            break;
        }
    }
    for (; i < n - 1; i++)
    {
        if (a[i] < a[i + 1] && f0 == 1)
        {
            f1 = 0;
            break;
        }
        else if (a[i] > a[i + 1] && f0 == 0)
        {
            f1 = 0;
            break;
        }
    }
    if (f1 == 0)
        printf("unsorted");
    else
        printf("sorted");
}