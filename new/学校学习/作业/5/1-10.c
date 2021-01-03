#include <stdio.h>
int main()
{
    int sum = 0, i;
    scanf("%d", &i);
    do
    {
        sum += i;
        i--;
    } while (i != 0);
    printf("%d", sum);
    return 0;
}