#include <stdio.h>
int main()
{
    int a[10], i = 10;
    while (i--)
        scanf("%d", &a[i]);
    i = 10;
    while (i--)
        printf("%d ", a[9 - i]);
}