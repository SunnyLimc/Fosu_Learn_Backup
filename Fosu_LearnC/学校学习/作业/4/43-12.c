#include <stdio.h>

void main(void)

{

    int x;

    scanf("%d", &x);

    if (x > 0)

        printf("Positive integer!\n");

    else if (x == 0)

        printf("Zero!\n");

    else

        printf("Negative integer!\n");
}