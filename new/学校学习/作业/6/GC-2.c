#include <stdio.h>

int main(void)

{

    int i, array[10] = {3, 12, 5, 7, 11, 32, 46, 26, 9, 27};

    printf("数组各元素值依次为：");

    for (i = 0; i < 10; i++)

        printf("%4d", array[i]);

    printf("\n");

    return 0;
}