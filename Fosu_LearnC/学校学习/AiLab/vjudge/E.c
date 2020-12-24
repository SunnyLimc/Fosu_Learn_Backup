#include <stdio.h>
int main()
{
    int n, c;
    int i, j, k = 1, cnt = 0, tmp, t[5010], t1[5010];
    scanf("%d %d", &n, &c);
    int a[5010] = {0};
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &tmp);
        t[i] = tmp;
        a[tmp]++;
        if (a[tmp] > c)
        {
            printf("NO");
            return 0;
        }
    }
    for (i = 1; i <= 5000; i++)
    {
        if (a[i] != 0)
        {
            for (j = 1; j <= n; j++)
            {
                if (t[j] == i)
                {
                    t1[j] = k;
                    k++;
                }
                if (k > c)
                    k = 1;
            }
            cnt++;
        }
    }
    printf("YES\n");
    for (i = 1; i <= n; i++)
        printf("%d ", t1[i]);
}