#include <stdio.h>
int main()
{
    int sum = 0, i;
    scanf("%d", &i);
    while (i != 0)
    {
        sum += i;
        i--;
    }
    printf("%d", sum);
    return 0;
}