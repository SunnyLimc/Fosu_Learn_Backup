#include <stdio.h>
int main()
{
    int a[3][4], maxi, maxj, max, i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    max = a[0][0];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
    printf("max is %d \n maxi is %d \n maxj is %d", max, maxi, maxj);
}