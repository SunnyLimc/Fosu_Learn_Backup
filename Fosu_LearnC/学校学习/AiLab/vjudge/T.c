#include <stdio.h>
int main()
{
    int n, i, c[20], v[20], sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &c[i]);
    for (i = 0; i < n; i++)
        if (v[i] - c[i] > 0)
            sum += v[i] - c[i];
    printf("%d", sum);
}