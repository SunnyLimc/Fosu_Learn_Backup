#include <stdio.h>

int main()
{
    int i, n, st, array[100];
    array[1] = 1;
    array[2] = 1;
    scanf("%d", &n);
    st = 2 * n;
    for (i = 3; i <= st; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }
    for (i = 1; i <= 2 * n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
