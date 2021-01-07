//字符串排序
#include <stdio.h>
#include <string.h>
int main()
{
    char s[3][20], *p, tmp[20];
    for (int i = 0; i < 3; i++)
    {
        scanf("%[^\n]", s[i]);
        getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        p = s[i];
        for (int j = i + 1; j < 3; j++)
            if (strcmp(s[j], p) < 0)
                p = s[j];
        if (p != s[i])
        {
            strcpy(tmp, p);
            strcpy(p, s[i]);
            strcpy(s[i], tmp);
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%s\n", s[i]);
}