#include <stdio.h>
int main()
{
    int a, b, c, *p1 = &a, *p2 = &b, *p3 = &c;
    scanf("%d %d %d", p1, p2, p3);
    void swap(int *, int *, int *);
    swap(p1, p2, p3);
    printf("%d %d %d", c, b, a);
}
void swap(int *p1, int *p2, int *p3)
{
    int tmp;
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
}