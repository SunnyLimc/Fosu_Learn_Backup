#include <stdio.h>
#include <string.h>
#define isSubEng(i) ch[i] >= 'a' && ch[i] <= 'z'
int main()
{
    int i;
    char ch[100];
    gets(ch);
    for (i = 0; i < strlen(ch); i++)
    {
        if (i == 0 && isSubEng(i))
            ch[i] -= 32;
        if (ch[i] == ' ' && isSubEng(i + 1))
            ch[i + 1] -= 32;
        printf("%c", ch[i]);
    }
}