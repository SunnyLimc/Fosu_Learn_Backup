#include <stdio.h>
int main()
{
    double F, C;
    scanf("%lf", &F);
    C = (double)5 / 9 * (F - 32);
    printf("%lf", C);
    return 0;
}