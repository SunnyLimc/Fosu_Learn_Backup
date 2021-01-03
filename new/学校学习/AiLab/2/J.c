#include <stdio.h>
int main()
{
    int a, b;
    double i;
    scanf("%d %d", &a, &b);
    i = (double)b / 100;
    printf("%.2lf", a / (i * i));
    return 0;
}