#include <stdio.h>
int main()
{
    int n, i, a[100];
    int sum(int, int[]);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d", sum(n, a));
    return 0;
}
int sum(int n, int a[])
{
    int i, sum;
    for (i = 0, sum = 0; i < n; i++)
        sum += a[i];
    return sum;
}