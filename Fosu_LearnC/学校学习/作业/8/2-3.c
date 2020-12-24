#include <stdio.h>
int main()
{
    int n, i, cnt = 0, tol, lot, arr[200];
    scanf("%d", &n);
    int *p = arr;
    for (i = 1; i <= n; i++)
        arr[i] = i;
    while (tol != 1)
    {
        tol = 0;
        for (i = 1; i <= n; i++)
        {
            if (*(p + i) != 0)
            {
                lot = i;
                cnt++;
                tol++;
            }
            if (cnt == 3)
            {
                *(p + i) = 0;
                cnt = 0;
            }
        }
    }
    printf("The last one is NO.%d", *(arr + lot));
}