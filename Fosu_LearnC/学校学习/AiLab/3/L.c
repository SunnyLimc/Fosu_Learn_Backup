#include <stdio.h>
int main()
{
    int a, b;
    double i;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        i = (double)b / 100;
        i = a / (i * i);
        if (i < 18.5)
            printf("Underweight\n");
        else if (i >= 18.5 && i <= 23.9)
            printf("Normal\n");
        else if (i > 23.9 && i <= 27.9)
            printf("Overweight\n");
        else
            printf("Obese\n");
    }
    return 0;
}