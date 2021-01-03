#include <stdio.h>

void input(int *p)

{

    int i;

    for (i = 0; i <= 9; i++)

        scanf("%d", p + i); //该行有错误
}

void output(int *p)

{

    int i;

    for (i = 0; i <= 9; i++)

        printf("%d ", *(p + i)); //该行有错误

    printf("\n");
}

int main(void)

{

    int a[10];

    input(a); //该行有错误

    output(a); //该行有错误

    return 0;
}