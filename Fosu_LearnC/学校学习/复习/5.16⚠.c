//输出菱形
#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
            printf(" ");
        for (int j = 0; j < i * 2 + 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
            printf(" ");
        for (int j = 0; j < (3 - i) * 2 - 1; j++)
            printf("*");
        printf("\n");
    }
}