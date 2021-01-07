//比较字符串
#include <stdio.h>
int main()
{
    char s1[20], s2[20];
    scanf("%[^\n]", s1);
    getchar();
    scanf("%[^\n]", s2);
    int output = 0;
    for (int i = 0; s1[i] && s2[i]; i++)
        if (s1[i] != s2[i])
        {
            output = s1[i] - s2[i];
            break;
        }
    printf("%d", output);
}