#include <stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}