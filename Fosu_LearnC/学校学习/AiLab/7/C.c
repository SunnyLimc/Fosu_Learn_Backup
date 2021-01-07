#include <stdio.h>
int main()
{
    int c1 = 0, c2 = 0, a, i = 10;
    while (i--)
    {
        scanf("%d", &a);
        if (a > 0)
            c1++;
        else if (a < 0)
            c2++;
    }
    printf("positive:%d\nnegative:%d", c1, c2);
}
