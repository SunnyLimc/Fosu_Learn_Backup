#include <stdio.h>
int main()
{
    int i, n, h, max = 0, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h);
        if (h >= max || i == 0)
        {
            max = h;
            cnt++;
        }
    }
    printf("%d", cnt);
}