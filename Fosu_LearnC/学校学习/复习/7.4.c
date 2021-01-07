//写一个函数使给定的3*3二维整型数组转置(行列互换)
#include <stdio.h>
void zz(int a[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < i; j++)
        {
            a[i][j] += a[j][i];
            a[j][i] = a[i][j] - a[j][i];
            a[i][j] = a[i][j] - a[j][i];
        }
}
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    zz(a);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}