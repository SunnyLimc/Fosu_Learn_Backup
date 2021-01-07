#include <stdio.h>

void main(void)

{

    int x, k;

    printf("«Î ‰»Îxµƒ÷µ£∫\n");

    scanf("%d", &x);

    k = x % 5;

    if (k == 0)

        printf("Yes!\n");

    else

        printf("No!\n");
}