#include <stdio.h>
#include <string.h>
int main()
{
    int i, c, c1 = 0, c2 = 0;
    char n[50];
    gets(n);
    c = strlen(n);
    for (i = 0; i < c; i++)
    {
        if (n[i] == 'A')
            c1++;
        if (n[i] == 'B')
            c2++;
    }
    if (c1 > c2)
        printf("A");
    else if (c1 == c2)
        printf("E");
    else
        printf("B");
}