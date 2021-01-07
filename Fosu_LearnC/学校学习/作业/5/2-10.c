#include <stdio.h>
int main()
{
    int sum = 0, i;
    scanf("%d", &i);
    for (; i >= 1; i--)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}