#include <stdio.h>
int main()
{
    int a, b, c;
    int max(int, int);
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
        printf("%d\n", max(a, max(b, c)));
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}