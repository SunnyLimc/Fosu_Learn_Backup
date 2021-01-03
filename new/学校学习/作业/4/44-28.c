#include <stdio.h>
int main()
{
    int a, b, tol;
    char obj;
    scanf("%d%c%d", &a, &obj, &b);
    switch (obj)
    {
    case '+':
        tol = a + b;
        break;
    case '-':
        tol = a - b;
        break;
    case '*':
        tol = a * b;
        break;
    case '/':
        tol = a / b;
        break;
    default:
        printf("Unknown operator!");
    }
    printf("%d %c %d = %d", a, obj, b, tol);
    return 0;
}