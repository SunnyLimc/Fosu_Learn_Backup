//有一行电文，已按下面规律译成密码
#include <stdio.h>
int main()
{
    char str[20], res[20];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            res[i] = (int)('z' - str[i] + 'a');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            res[i] = (int)('Z' - str[i] + 'A');
        else
            res[i] = str[i];
    }
    printf("encrypt: %s\n", str);
    printf("decrypt: %s\n", res);
}