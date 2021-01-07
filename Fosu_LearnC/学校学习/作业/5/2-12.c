#include <stdio.h>
int main()
{
    int N, b, i;
    scanf("%d,%d", &N, &b);
    if (N <= 100 && N > 0 && b <= 100 && b > 0)
        ;
    else
        return 0;
    for (i = 0; i < N; i++)
    {
        printf("%d*%d=%d\n", b, i + 1, b * (i + 1));
    }
    return 0;
}
