#include <stdio.h>
#include <string.h>
int main()
{
    char input[15];
    do
    {
        gets(input);
        if (strcmp(input, "admin admin") == 0)
            printf("Login Success!\n");
        else
            printf("Login Fail!\n");
    } while (getchar() != EOF);
    return 0;
}