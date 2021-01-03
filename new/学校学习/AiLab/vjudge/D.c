#include <stdio.h>
int main()
{
    int a, sum;
    scanf("%d", &a);
    sum = ((1 + a) * a) / 2;
    if (sum % 2 == 0)
        printf("0");
    else
        printf("1");
    return 0;
}