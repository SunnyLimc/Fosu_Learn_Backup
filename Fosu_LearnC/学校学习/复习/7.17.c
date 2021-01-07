//递归法将数字转为字符串
#include <stdio.h>
int p(int num)
{
    if (num / 10 != 0)
        p(num / 10);
    putchar(num % 10 + '0');
}
int main()
{
    int num;
    scanf("%d", &num);
    if (num < 0)
    {
        putchar('-');
        p(-num);
    }
    else
        p(num);
}