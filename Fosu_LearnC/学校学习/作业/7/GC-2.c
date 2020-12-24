#include <stdio.h>

int main(void)

{

    float a, b, c;

    float max(float x, float y);

    printf("请输入两个实数，中间用逗号分隔：");

    scanf("%f,%f", &a, &b);

    c = max(a, b);

    printf("两个数的最大值为:%6.2f\n", c);

    return 0;
}

float max(float x, float y)

{

    float z;

    if (x > y)

        z = x;

    else

        z = y;

    return z;
}
