#include <stdio.h>
int A = 11, B = 6;

int min(int x, int y)

{

    int z;

    z = x < y ? x : y;

    return z;
}

int main(void)

{

    printf("min=%d\n", min(A, B));

    return 0;
}
