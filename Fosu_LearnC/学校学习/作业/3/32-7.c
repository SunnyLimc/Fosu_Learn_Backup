#include <stdio.h>
int main()
{
    int n, num = 0;
    scanf("%d", &n);
    double r;
    r = n;
    while (r >= 0.3)
    {
        r = r - 0.3;
        num = num + 1;
    }
    printf("%d %.0lf", num, r * 10);
    return 0;
}