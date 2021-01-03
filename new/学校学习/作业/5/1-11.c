#include <stdio.h>
int main()
{
    int N, midNum;
    scanf("%d", &N);
    if (N > 0)
        midNum = N;
    else
        return 0;
    do
    {
        midNum *= (N - 1);
        N--;
    } while (N != 1);
    printf("%d", midNum);
    return 0;
}
