#include <stdio.h>
int main1()

{
    int m, n;         //边距
    int i, j;         //循环
    int num[20][20];  //二维数组
    int bigIM[20][2]; //行最大值
    int bigJN[20][2]; //列最大值
    int tmp, hBig, zSml;
    scanf("%d*%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &num[i][j]);
    //判断每行最大值并储存行数
    for (i = 0; i < m; i++)
    {
        hBig = num[i][0];
        bigIM[i][0] = 0;
        for (j = 0; j < n; j++)
        {
            if (num[i][j] > hBig)
            {
                hBig = num[i][j];
                bigIM[i][0] = j;
            }
        }
    }
    printf("%d\n", bigIM[2][0]);
    //判断每列最大值并储存列数
    for (i = 0; i < n; i++)
    {
        zSml = num[0][i];
        bigJN[i][0] = 0;
        for (j = 0; j < m; j++)
        {
            if (num[j][i] < zSml)
            {
                zSml = num[j][i];
                bigJN[i][0] = j;
            }
        }
    }
    printf("%d\n", bigJN[2][0]);
    //判断是否相等
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (bigIM[i][0] == i && bigJN[j][0] == j)
            {
                printf("Array[%d][%d]=%d\n", i, j, num[i][j]);
            }
        }
    }
    return 0;
}
