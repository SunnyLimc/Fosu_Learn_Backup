#include <stdio.h>
int main()
{
    int m, n, i, tmp, cnt = 0;
    scanf("%d %d", &m, &n);
    int a[10000];
    for (i = 0; i < m * n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m * n; i++)
    {
        scanf("%d", &tmp);
        if (tmp == a[i])
        {
            cnt++;
        }
    }
    printf("%.2lf", (double)cnt / (m * n) * 100);
    return 0;
}
