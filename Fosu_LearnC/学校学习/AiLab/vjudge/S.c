#include <stdio.h>
int main()
{
    int n, cnt = 0;
    double d, x, y;
    scanf("%d %lf", &n, &d);
    while (n--)
    {
        scanf("%lf %lf", &x, &y);
        if (x * x + y * y <= d * d)
            cnt++;
    }
    printf("%d", cnt);
}