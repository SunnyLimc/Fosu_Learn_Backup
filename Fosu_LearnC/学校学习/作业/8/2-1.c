#include <stdio.h>

int main()
{
    int a[10], *p = a, *pMax, *pMin, i;
    void input(int *, int);
    void sort(int *, int *, int *, int n);
    input(p, 10);
    sort(p, pMax, pMin, 10);
}
void input(int *p, int n)
{
    for (int i; i < n; i++, p++)
        scanf("%d", p);
}
void sort(int *p, int *pMax, int *pMin, int n)
{
    pMax = pMin = p;
    for (int i = 0; i < 10; i++)
        if (*(p + i) > *pMax)
            pMax = (p + i);
        else if (*(p + i) < *pMin)
            pMin = (p + i);
    int t;
    t = *pMin;
    *pMin = *p;
    *p = t;
    t = *pMax;
    *pMax = *(p + 9);
    *(p + 9) = t;
    for (int i = 0; i < n; i++)
        printf("%d ", *(p + i));
}