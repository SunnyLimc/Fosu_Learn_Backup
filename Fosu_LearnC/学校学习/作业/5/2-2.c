#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, midNum1, midNum2, array[100];
    scanf("%d", &n);
    for (i = 1, j = 0; i <= n; i++)
    {
        midNum1 = i + 100;
        midNum2 = i + 100 + 168;
        if ((pow((int)sqrt(midNum1), 2) == midNum1) && (pow((int)sqrt(midNum2), 2) == midNum2))
        {
            j++;
            array[j] = i;
        }
    }

    for (i = 1; i <= j; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}