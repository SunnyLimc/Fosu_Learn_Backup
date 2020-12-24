#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}