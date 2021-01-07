#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Give me two attritube, Fuck you.");
    }
    else
    {
        printf("Hello, %s", argv[1]);
    }
    return 0;
}