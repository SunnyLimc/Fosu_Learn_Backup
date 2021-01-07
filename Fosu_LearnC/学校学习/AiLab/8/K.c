#include <stdio.h>
int main()
{
    int n, arr[30], tmp[30], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                tmp[j] = 1;
            else
                tmp[j] = arr[j - 1] + arr[j];
            printf("%5d", tmp[j]);
        }
        for (j = 0; j <= i; j++)
        {
            arr[j] = tmp[j];
        }
        printf("\n");
    }
    return 0;
}