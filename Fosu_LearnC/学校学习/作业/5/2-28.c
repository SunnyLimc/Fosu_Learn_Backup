#include <stdio.h>
int main()
{
    char i, j, k;
    for (i = 'a'; i <= 'c'; i += 1)
    {
        for (j = 'x'; j <= 'z'; j += 1)
        {
            if ((i == 'a' && j == 'x') || (i == 'c' && (j == 'x' || j == 'z')))
                ;
            else
                printf("%c--%c\n", i, j);
        }
    }
}