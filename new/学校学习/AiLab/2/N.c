#include <stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        printf("%d\n", 2 << a - 1);
    }
    return 0;
}