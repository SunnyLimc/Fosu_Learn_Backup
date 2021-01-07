#include <stdio.h>
int main()
{
    int n, i;
    double dPai, midNum = 0;
    scanf("%d", &n);
    for (i = 3; i <= (4 * n - 1); i += 2)
    {
        midNum = -midNum;
        midNum -= 1 / (double)i;
    }
    dPai = (1 + midNum) * 4;
    printf("%.12lf", dPai);
    return 0;
}