#include <stdio.h>
int f = 1;

int fac(int m)

{

    f = f * m;

    return f;
}

int main(void)

{

    int i, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d!=%d\n", i, fac(i));
    }

    return 0;
}