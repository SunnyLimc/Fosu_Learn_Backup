//���������ε����߳����ú��׹�ʽ���������������������������λС����

// ���������������߳�a,b,c������s=(a+b+c)/2����

// ���������=(s*(s-a)*(s-b)*(s-c))^(1/2)

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