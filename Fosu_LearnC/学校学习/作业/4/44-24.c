#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("max=%d", x);
    }
    else
    {
        printf("max=%d", y);
    }
    return 0;
}