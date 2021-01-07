#include <stdio.h>
int main()
{
    int i, j, n, m, k, s1, s2, tmp;
    char o;
    scanf("%d %d", &n, &m);
    int a[10][10];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d", &k);
    while (k--)
    {
        getchar();
        scanf("%c %d %d", &o, &s1, &s2);
        s1--;
        s2--;
        // printf("%c %d %d", o, s1, s2);
        if (o == 'r')
            for (i = 0; i < m; i++)
            {
                tmp = a[s1][i];
                a[s1][i] = a[s2][i];
                a[s2][i] = tmp;
            }
        else if (o == 'c')
        {
            for (i = 0; i < n; i++)
            {
                tmp = a[i][s1];
                a[i][s1] = a[i][s2];
                a[i][s2] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}