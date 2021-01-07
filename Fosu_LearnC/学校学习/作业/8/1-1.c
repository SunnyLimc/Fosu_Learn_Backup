#include <stdio.h>

int swap(int *m, int *n)
{
    int tmp;
    tmp = *m;
    *m = *n;
    *n = tmp;
}
int main()
{
    int m, n, *m1 = &m, *n1 = &n;
    scanf("%d,%d", &m, &n);
    printf("%d,%d\n", m, n);
    swap(m1, n1);
    printf("%d,%d", m, n);
}