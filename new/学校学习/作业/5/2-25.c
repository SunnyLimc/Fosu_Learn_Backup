#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    scanf("%c", &ch);
    printf("@@");
    for (i = 0; i < 10; i++)
    {
        for (j = 2; j <= (2 * i + 2); j += 2)
        {
            printf("%c%c", ch, ch);
        }
        printf("\n");
    }
    return 0;
}