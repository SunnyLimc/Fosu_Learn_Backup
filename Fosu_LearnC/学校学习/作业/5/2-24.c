#include <stdio.h>
int main()
{
    int i;
    char ch;
    scanf("%c", &ch);
    for (i = 1; i <= 8; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %c%c %c%c %c%c %c%c\n", ch, ch, ch, ch, ch, ch, ch, ch);
        }
        else
        {
            printf("%c%c %c%c %c%c %c%c\n", ch, ch, ch, ch, ch, ch, ch, ch);
        }
    }
    return 0;   `



        
}