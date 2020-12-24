//给出三角形的三边长，用海伦公式求三角形面积并输出，结果保留两位小数。

// 输入三角形三个边长a,b,c，计算s=(a+b+c)/2，则

// 三角形面积=(s*(s-a)*(s-b)*(s-c))^(1/2)

#include <stdio.h>
#include <math.h>

int main()
{
    float s, area, a, b, c;
    scanf("%f %f %f", &a,
          &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area=%.2f\n", area);
    return 0;
}