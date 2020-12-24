#include <stdio.h>
int main()
{
    int n, m, c, b[20], a, sum, cnt = 0;
    int i, j;
    scanf("%d %d %d", &n, &m, &c);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a);
            sum += (a * b[j]);
        }
        if (sum + c > 0)
            cnt++;
    }
    printf("%d", cnt);
}