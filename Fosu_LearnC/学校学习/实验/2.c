#include <stdio.h>
int main()
{
    int i, j, a[3][4], m1[3], m2[4];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
    {
        m1[i] = a[i][0];
        for (j = 0; j < 4; j++)
            if (a[i][j] > m1[i])
                m1[i] = a[i][j];
    }
    for (i = 0; i < 4; i++)
    {
        m2[i] = a[0][i];
        for (j = 0; j < 3; j++)
            if (a[j][i] < m2[i])
                m2[i] = a[j][i];
    }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (a[i][j] == m1[i] && a[i][j] == m2[j])
                printf("%d %d %d", a[i][j], i, j);
}