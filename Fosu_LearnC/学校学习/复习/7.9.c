//编写一个函数，传参字符串，统计各类字符，并在主函数输出
#include <stdio.h>
int *tj(char a[])
{
    static int b[5] = {0};
    for (int i = 0; a[i]; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            b[0]++;
        else if (a[i] <= 'Z' && a[i] >= 'A')
            b[1]++;
        else if (a[i] <= '9' && a[i] >= '0')
            b[2]++;
        else if (a[i] == ' ')
            b[3]++;
        else
            b[4]++;
    }
    return b;
}
int main()
{
    char s[20];
    int *b, res[5];
    scanf("%[^\n]", s);
    b = tj(s);
    for (int i = 0; i < 5; i++)
        res[i] = *(b++);
    printf("lower:%d, Upper:%d, Num:%d, Space:%d, Other:%d", res[0], res[1], res[2], res[3], res[4]);
}