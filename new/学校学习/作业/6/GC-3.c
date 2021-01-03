#include <stdio.h>

int main(void)

{
    int i, j;

    int m[3][4] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}};

    printf("输出结果为：\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
