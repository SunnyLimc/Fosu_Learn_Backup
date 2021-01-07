#include <stdio.h>

int main()
{
    int i;
    char ch[50];
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
        ;
    printf("%d", i);
    return 0;
}