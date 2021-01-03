#include <stdio.h>
int main()
{
    int count;
    int length(char *);
    char a[200];
    gets(a);
    count = length(a);
    printf("%d", count);
}
int length(char *p)
{
    int count = 0;
    for (; *p != '\0'; p++)
        count++;
    return count;
}