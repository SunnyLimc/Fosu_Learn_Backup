#include <stdio.h>
int main()
{
    int n, a[100], max, tmp, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        max = a[i];
        for (j = i; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return 0;
}
