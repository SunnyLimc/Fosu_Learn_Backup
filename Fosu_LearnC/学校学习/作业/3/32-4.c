#include <stdio.h>

int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d,%d,%d\n", a, b, c);
    temp = b;
    b = a;
    a = c;
    c = temp;
    printf("%d,%d,%d", a, b, c);
    return 0;
}