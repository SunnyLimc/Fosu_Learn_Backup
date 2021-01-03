#include <stdio.h>
int main()
{
    int N, midNum;
    scanf("%d", &N);
    midNum = N;
    while (N != 1)
    {
        midNum *= (N - 1);
        N--;
    }
    printf("%d", midNum);
    return 0;
}
