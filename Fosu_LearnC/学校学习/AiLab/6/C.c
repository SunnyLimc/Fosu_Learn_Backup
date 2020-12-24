#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 0 && a <= 3)
    {
        printf("Good");
    }
    if (a >= 4 && a <= 9)
    {
        printf("Danger");
    }
    if (a >= 10)
    {
        printf("Danger++");
    }
}
