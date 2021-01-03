#include <stdio.h>
int main()
{
    int a;
    while ((scanf("%d", &a)) != EOF)
    {
        if (a > 0)
            printf("1\n");
        else if (a == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
    return 0;
}