//need a review
#include <stdio.h>
int main()
{
    float sn = 100.0, hn;
    int i, n;
    scanf("%d", &n);
    for (i = 2, hn = sn / 2; i <= n; i++)
    {
        sn += 2 * hn;
        hn = hn / 2;
    }
    printf("the total of road is %f\n", sn);
    printf("the %d-th is %f meter\n", n, hn);
    return 0;
}