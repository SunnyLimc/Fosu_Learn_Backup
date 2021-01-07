#include <stdio.h>
int main()
{
    char a[81];
    int i, cnt = 0;
    gets(a);
    for (i = 0; i < 80; i++)
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
            cnt++;
    printf("%d", cnt);
}