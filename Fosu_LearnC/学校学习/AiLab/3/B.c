#include <stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a >= 90 && a <= 100)
            printf("Perfect\n");
    }
    return 0;
}