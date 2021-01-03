#include <stdio.h>

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        getchar();
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            printf("YES\n");
        else
            printf("NO\n");
    }
}