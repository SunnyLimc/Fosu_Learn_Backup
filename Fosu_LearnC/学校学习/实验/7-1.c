#include <stdio.h>
int main()
{
    int a, b, c, *p1 = &a, *p2 = &b, *p3 = &c, tmp;
    scanf("%d,%d,%d", p1, p2, p3);
    if (*p1 > *p2)
    {
        tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
    }
    if (*p2 > *p3)
    {
        tmp = *p2;
        *p2 = *p3;
        *p3 = tmp;
    }
    if (*p1 > *p2)
    {
        tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
    }
    printf("%d %d %d", *p3, *p2, *p1);
}