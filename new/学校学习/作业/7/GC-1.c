#include <stdio.h>

float add(float x, float y)

{

    float z;

    z = x + y;

    return z;
}

int main(void)

{

    float a, b, c;

    printf("please input a and b：");

    scanf("%f,%f", &a, &b);

    c = add(a, b);

    printf("sum=%6.2f\n", c);

    return 0;
}
