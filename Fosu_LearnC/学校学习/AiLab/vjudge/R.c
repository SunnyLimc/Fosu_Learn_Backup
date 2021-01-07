#include <stdio.h>
int main()
{
    char a;
    int n, i, j, cnt = 0;
    scanf("%d", &n);
    getchar();
    for (i = 1;; i++)
    {
        for (j = 1; j <= i; j++)
        {
            scanf("%c", &a);
            if (j == i)
                printf("%c", a);
            cnt++;
            if (cnt > n)
                return 0;
        }
    }
}
