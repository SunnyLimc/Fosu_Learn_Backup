#include <stdio.h>
#include <math.h>
int input(int *p)
{
    scanf("%d", p);
    if (*p % 2 == 0 && *p > 6)
        ;
    else
        return -1;
}
void findsushu(int a[], int n)
{
    int i, j, cnt = 0;
    for (i = 1; i <= n; i++)
        a[i] = i;
    for (i = 2; i <= sqrt(n); i++)
        for (j = i + 1; j <= n; j++)
            if (j % i == 0)
                a[j] = 0;
    for (i = 2; i < n; i++)
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
            cnt++;
        }
    printf("\nThe total is %d", cnt);
}
int sushu()
{
    int *p;
    int n;
    p = &n;
    if (input(p) == -1)
        return -1;
    int a[1000], b[1000];
    findsushu(a, n);
}

int main()
{
    if (sushu() == -1)
        printf("Input Error.");
}