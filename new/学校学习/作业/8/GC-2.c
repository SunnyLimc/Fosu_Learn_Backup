#include <stdio.h>

int main(void)

{

    int a, b;

    void swap(int *p1, int *p2);

    printf("Please input a and b：");

    scanf("%d%d", &a, &b);
    int *p1 = &a, *p2 = &b;
    swap(p1, p2);

    printf("swapped: a=%d,b=%d\n", a, b);

    return 0;
}

void swap(int *p1, int *p2)

{

    int temp;

    temp = *p1;

    *p1 = *p2;

    *p2 = temp;
}