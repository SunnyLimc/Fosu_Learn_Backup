#include <stdio.h>
int main()
{
    char a;
    while ((a = getchar()) != EOF)
    {
        getchar();
        if ((a >= 'A' && a <= 'Z'))
            printf("%c\n", a + 32);
        else if (a >= 'a' && a <= 'z')
            printf("%c\n", a - 32);
    }
    return 0;
}
