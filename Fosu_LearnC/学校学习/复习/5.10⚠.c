//求分数序列 2/1 + 3/2 + 5/3 +8/5 ... 的和
#include <stdio.h>
int main()
{
    double sum = 0, fz = 1, fm = 1;
    for (int i = 1; i <= 20; i++)
    {
        fz += fm;
        fm = fz - fm;
        sum += fz / fm;
    }
    printf("%lf", sum);
}