#include <stdio.h>
int main()
{
    int n, t, s = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &t);
        s += t;
        if (n == 0)
            printf("%d", s);
    }
}