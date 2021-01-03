#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int result(int);
    for (i = 1; i <= n; i++)
    {
        printf("%12d", result(i));
        if (i % 5 == 0)
            printf("\n");
    }
    return 0;
}
int result(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return result(n - 1) + result(n - 2);
}