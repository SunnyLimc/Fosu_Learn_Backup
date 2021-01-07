#include <stdio.h>
int main()
{
    double a, b;
    char c;
    while (scanf("%lf%c%lf", &a, &c, &b) != EOF)
    {
        if (c == '/' && b == 0)
            printf("Wrong!Division by zero!\n");
        else
        {
            switch (c)
            {
            case '+':
                printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
                break;
            case '-':
                printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
                break;
            case '*':
                printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
                break;
            case '/':
                printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
                break;
            default:
                printf("Invalid operation!\n");
            }
        }
    }
}