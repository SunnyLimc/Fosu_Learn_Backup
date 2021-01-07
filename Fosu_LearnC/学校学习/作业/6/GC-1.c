#include <stdio.h>

int main(void)

{

    int i, n = 5;

    float f[5];

    printf("请输入5个实数：");

    for (i = 0; i < 5; i++)

        scanf("%f", &f[i]);

    printf("这5个数为：");

    for (i = 0; i < 5; i++)

        printf("%6.1f", f[i]);

    printf("\n");

    return 0;
}