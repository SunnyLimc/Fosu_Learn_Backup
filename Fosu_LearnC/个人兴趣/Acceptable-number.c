#include <stdio.h>

int main()
{
    int i, m = 0, targetNum, num[100];
    scanf("%d", &targetNum);
    while (targetNum != 0)
    {
        num[m] = targetNum % 10;
        targetNum = targetNum / 10;
        m++;
    }
    for (i = m - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    return 0;
}