#include <stdio.h>
int main()
{
    float n, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
    scanf("%f", &n);
    p1 = n * (1 + r1);
    p2 = n * (1 + r2);
    p3 = n * (1 + r3 / 2) * (1 + r3 / 2);
    printf("p1=%f\n", p1);
    printf("p2=%f\n", p2);
    printf("p3=%f\n", p3);
    return 0;
}