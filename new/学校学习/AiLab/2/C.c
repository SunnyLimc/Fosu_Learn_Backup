#include <stdio.h>
int main()
{
    int a, g, s, b, q;
    scanf("%d", &a);
    g = a % 10;
    s = a / 10 % 10;
    b = a / 100 % 10;
    q = a / 1000 % 10;
    printf("%d%d%d%d", g, s, b, q);
}