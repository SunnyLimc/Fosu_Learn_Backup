#include <stdio.h>
#include <string.h>

int main(void)

{

    char str1[20], str2[20], str3[20], strmax[20];

    printf("请输入3个字符串：\n");

    scanf("%s%s%s", str1, str2, str3);

    if (strcmp(str1, str2) > 0)

        strcpy(strmax, str1);

    else

        strcpy(strmax, str2);

    if (strcmp(str3, strmax) > 0)

        strcpy(strmax, str3);

    printf("最大的字符串为：%s\n", strmax);

    return 0;
}