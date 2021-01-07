#include <stdio.h>
int main()
{
    int n;
    int prime(int);
    scanf("%d", &n);
    n = prime(n);
    if (n == 0)
        printf("no");
    else
        printf("yes");
    return 0;
}
int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}