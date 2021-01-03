#include <stdio.h>

void main(void)

{

    char ch;

    ch = getchar();

    if (ch >= 'a' && ch <= 'z')

        printf("This character is lowercase.\n");

    else if (ch >= 'A' && ch <= 'Z')

        printf("This character is uppercase.\n");

    else if (ch >= '0' && ch <= '9')

        printf("This character is a digit.\n");

    else

        printf("This character is other character.\n");
}