//统计英文字母空格数字的个数
#include <stdio.h>
int main()
{
    int xxzm = 0, dxzm = 0, space = 0, num = 0, other = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z')
            xxzm++;
        else if (c >= 'A' && c <= 'Z')
            dxzm++;
        else if (c == ' ')
            space++;
        else if (c >= '0' && c <= '9')
            num++;
        else
            other++;
    }
    printf("xxzm:%d dxzm:%d space:%d num:%d other:%d", xxzm, dxzm, space, num, other);
}