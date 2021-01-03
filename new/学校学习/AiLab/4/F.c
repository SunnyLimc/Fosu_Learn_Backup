#include <stdio.h>
int main()
{
    double a;
    double i;
    scanf("%lf %lf", &a, &i);
    i = a / (i * i);
    if (i >= 18.5 && i <= 23.9)
        printf("Normal");
    else
        printf("Abnormal");
}