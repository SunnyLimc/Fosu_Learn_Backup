#include <stdio.h>
int a[1000000];
int main()
{
    int n, m, k;
    int i, sizenow, cnt = 0, pcnt;
    scanf("%d %d %d", &n, &m, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (sizenow = k, pcnt = m, i = n - 1; i >= 0; i--)
    {
        if (a[i] <= k && pcnt != 0)
        {
            if (sizenow - a[i] >= 0)
            {
                cnt++;
                sizenow -= a[i];
            }
            else if (sizenow - a[i] < 0)
            {
                pcnt--;
                if (pcnt == 0)
                    break;
                sizenow = k;
                sizenow -= a[i];
                cnt++;
            }
            if (sizenow == 0)
            {
                pcnt--;
                sizenow = k;
            }
        }
        else
            break;
    }
    printf("%d", cnt);
}