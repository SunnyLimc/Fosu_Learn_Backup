#include <stdio.h>
int main()
{
    int n, h, m;
    scanf("%d %d %d", &n, &h, &m);
    if (m % h == 0)
        m = m / h;
    else
        m = (m / h) + 1;
    n = n - m;
    printf("%d", n);
    return 0;
}