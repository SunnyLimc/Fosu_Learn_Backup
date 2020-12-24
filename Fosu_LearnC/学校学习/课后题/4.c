#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "AcC";
    char b[] = {'b', 'b', 'c'};
    char *p = b;
    printf("%ld\n", strlen(a));
    printf("%ld\n", strlen(b));
    for (; *p != '\0'; p++)
        printf("%c", *p);
}
