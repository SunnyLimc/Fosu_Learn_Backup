#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[50], ch2[50];
    gets(ch1);
    gets(ch2);
    if (strlen(ch1) < strlen(ch2))
    {
        printf("%s %d", ch1, strlen(ch1));
    }
    else
    {
        printf("%s %d", ch2, strlen(ch2));
    }
}