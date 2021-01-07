#include <stdio.h>
int main()
{
    int chars = 0, spaces = 0, digits = 0, others = 0;
    char ch;
    while (1)
    {
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            chars++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            others++;
        }
    }
    printf("char=%d space=%d digit=%d others=%d", chars, spaces, digits, others);
    return 0;
}