#include <stdio.h>
int main()
{
    int n, a[100], i;
    int sort(int, int[]);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(n, a);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
int sort(int n, int a[])
{
    int i, j, tmp;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n - i; j++)
            if (a[j - 1] > a[j])
            {
                tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
    return 0;
}