#include <stdio.h>
int main()
{
    int n, a, i, j, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a);
            if (j < i && a != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    printf("YES\n");
}