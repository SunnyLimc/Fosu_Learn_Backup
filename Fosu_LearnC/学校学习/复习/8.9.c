//写一函数将3*3的整数矩阵转置
#include <stdio.h>
void zz(int (*p)[3])
{
    int t;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < i; j++)
        {
            t = *(*(p + i) + j);
            *(*(p + i) + j) = *(*(p + j) + i);
            *(*(p + j) + i) = t;
        }
}
int main()
{
    int a[3][3], *p = &a[0][0];
    for (int i = 0; i < 9; i++, p++)
        scanf("%d", p);
    //
    zz(a);
    //
    p = &a[0][0];
    for (int i = 0; i < 9; i++, p++)
    {
        printf("%d ", *p);
        if ((i + 1) % 3 == 0)
            printf("\n");
    }
}