#include <stdio.h>
int main()
{
    int a, b, i, r, n;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    r = a % b;
    n = a * b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    printf("�������������Լ����%d����С��������%d\n", b, n / b);
    return 0;
}