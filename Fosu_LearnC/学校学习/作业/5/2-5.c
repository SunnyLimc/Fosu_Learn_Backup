#include <stdio.h>
int main()
{
    int sum, total = 0, i, j;
    scanf("%d", &i);
    while (i != 0)
    {
        j = i;
        sum = 1;
        while (j != 0)
        {
            sum *= j;
            j--;
        }
        total += sum;
        i--;
    }
    printf("%d", total);
    return 0;
}