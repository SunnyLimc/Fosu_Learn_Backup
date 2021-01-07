#include <stdio.h>

int main()
{
    double x, y;
    char ch;
    scanf("%lf,%lf", &x, &y);
    scanf("%c", &ch);
    ch = getchar();
    switch (ch)
    {
    case '+':
        printf("%f", x + y);
        break;
    case '-':
        printf("%f", x - y);
        break;
    case '*':
        printf("%f", x * y);
        break;
    case '/':
        if (y != 0)
            printf("%f", x / y);
        else
            printf("error");
        break;
    default:
        printf("error");
    }
    return 0;
}