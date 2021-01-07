#include <stdio.h>
int main()
{
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    if (a + b >= 100)
    {
        printf("%d", (a + b) % 100);
    }
    else
        printf("%d", a + b);
    return 0;
}