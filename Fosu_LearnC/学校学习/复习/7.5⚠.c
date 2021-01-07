//使字符串反序存放
#include <stdio.h>
#include <string.h>
void fx(char a[])
{
    int lng = strlen(a);
    char tmp;
    for (int i = 0; i < lng / 2; i++)
    {
        a[i] += a[lng - i - 1];
        a[lng - i - 1] = a[i] - a[lng - i - 1];
        a[i] = a[i] - a[lng - i - 1]; //不要忘了-1
    }
}
int main()
{
    char a[20];
    scanf("%[^\n]", a);
    fx(a);
    puts(a);
}