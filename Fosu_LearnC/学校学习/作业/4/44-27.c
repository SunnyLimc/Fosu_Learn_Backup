#include <stdio.h>
int main()
{
    int a, b;
    char obj;
    scanf("%d %d", &a, &b);
    getchar();
    scanf("%c", &obj);
    switch (obj)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
    }
    return 0;
}