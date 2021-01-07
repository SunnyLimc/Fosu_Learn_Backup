#include <stdio.h>
int main()
{
    char a;
    while ((a = getchar()) != EOF)
    {
        getchar();
        printf("%c\n", a + 32);
    }
    return 0;
}