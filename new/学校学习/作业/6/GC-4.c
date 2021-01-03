#include <stdio.h>

int main(void)

{

    int i, j;

    float f[2][3] = {-1.5, 2.6, -3.7, 1.1, -1.2, 1.3};

    float sum = 0;

    for (i = 0; i < 2; i++)

        for (j = 0; j < 3; j++)

            if (f[i][j] > 0)

                sum = sum + f[i][j];

    printf("数组中大于0的各元素之和为%5.1f\n", sum);

    return 0;
}