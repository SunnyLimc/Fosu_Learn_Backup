#include <stdio.h>
int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 3, j = 0; i <= n; i++)
    {
        if (i % 3 != 0)
        {
            printf("%d ", i);
            j++;
            if (j % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}