#include <stdio.h>

void main(void)

{

    int x, y;

    printf("������x��ֵ��");

    scanf("%d", &x);

    if (-2 <= x && x <= 2)

        y = 10;

    else

        y = 0;

    printf("y=%d\n", y);
}