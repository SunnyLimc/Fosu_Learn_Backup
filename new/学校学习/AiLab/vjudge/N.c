#include <stdio.h>
int main()
{
    int i, j;
    char a[5], min, none;
    while (scanf("%c%c%c%c", &a[0], &a[1], &a[2], &none) != EOF)
    {
        for (i = 0; i < 3; i++)
        {
            min = a[i];
            for (j = i; j < 3; j++)
                if (a[j] < min)
                {
                    min = a[j];
                    a[j] = a[i];
                    a[i] = min;
                }
        }
        for (i = 0; i < 3; i++)
        {
            if (i <= 1)
                printf("%c ", a[i]);
            else
                printf("%c\n", a[i]);
        }
    }
}