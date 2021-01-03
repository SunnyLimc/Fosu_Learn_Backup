#include <stdio.h>

int main(void)
{

    int i, *p;

    p = &i;

    printf("Please input i：");

    scanf("%d", p);

    printf("i=%d\n", *p);

    return 0;
}