#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    void mystrlen(char *);
    mystrlen(c);
}
void mystrlen(char *s)
{
    printf("The length of string is %d", strlen(s));
}