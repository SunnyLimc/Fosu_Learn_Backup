#include <stdio.h>
int main()
{
    int N, midNum;
    scanf("%d", &N);
    midNum = N;
    for (; N > 1; N--)
    {
        midNum *= (N - 1);
    }
    printf("%d", midNum);
    return 0;
}
