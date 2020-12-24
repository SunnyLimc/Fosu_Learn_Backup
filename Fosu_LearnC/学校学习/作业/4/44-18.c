#include <stdio.h>
int main()
{
    int i, num[50], zs = 0, fs = 0, zero = 0;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        if (num[i] == 0)
        {
            zero++;
        }
        else if (num[i] > 0)
        {
            zs++;
        }
        else // num[i]<0
        {
            fs++;
        }
    }
    printf("%d %d %d", zs, fs, zero);
    return 0;
}