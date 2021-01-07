//不用strcat拼接字符串
#include <stdio.h>
int main()
{
    char s1[20], s2[20], s[41];
    int cnt = 0;
    scanf("%s", s1);
    scanf("%s", s2);
    for (int i = 0; s1[i]; i++, cnt++)
        s[cnt] = s1[i];
    for (int i = 0; s2[i]; i++, cnt++)
        s[cnt] = s2[i];
    s[cnt] = '\0';
    printf("%s", s);
}