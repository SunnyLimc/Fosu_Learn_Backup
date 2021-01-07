#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[50], ch2[50];
    gets(ch1);
    gets(ch2);
    strcat(ch1, " ");
    strcat(ch1, ch2);
    puts(ch1);
}