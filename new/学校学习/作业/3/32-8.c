#include <stdio.h>
int main()
{
    unsigned int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %.2lf", a + b + c, a * b * c, (double)(a + b + c) / 3);
    return 0;
}