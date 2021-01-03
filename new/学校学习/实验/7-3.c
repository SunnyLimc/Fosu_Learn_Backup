#include <stdio.h>
int main()
{
    int n, i, j, *max, tmp;
    scanf("%d", &n);
    int a[n], *p = a;
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
        printf("%d ", *(a + i));
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        max = a + i;
        for (j = i; j < n; j++)
            if (*(a + j) > *max)
            {
                tmp = *max;
                *max = *(a + j);
                *(a + j) = tmp;
            }
    }
    for (i = n - 1; i > -1; i--)
        printf("%d ", *(a + i));
}