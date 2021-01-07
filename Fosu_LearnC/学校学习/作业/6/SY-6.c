#include <stdio.h>
#include <string.h>
int main()
{
    int capital[3] = {0}, lower[3] = {0}, space[3] = {0}, digit[3] = {0}, other[3] = {0}, ln, i;
    char ch[81];
    for (ln = 0; ln < 3; ln++)
    {
        gets(ch);
        for (i = 0; i < strlen(ch); i++)
        {
            if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                lower[ln]++;
            }
            else if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                capital[ln]++;
            }
            else if (ch[i] == ' ')
            {
                space[ln]++;
            }
            else if (ch[i] >= '0' && ch[i] <= '9')
            {
                digit[ln]++;
            }
            else
            {
                other[ln]++;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d line:capital=%d,lower=%d,digit=%d,space=%d,other=%d\n", i, capital[i], lower[i], digit[i], space[i], other[i]);
    }
    return 0;
}