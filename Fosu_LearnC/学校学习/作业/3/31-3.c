
// 给定一个大写字母，要求用小写字母输出。


#include <stdio.h>

int main()
{
    char letter;
    scanf("%c", &letter);
    printf("%c", letter + 32);
    return 0;
}