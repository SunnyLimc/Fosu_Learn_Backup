#include <stdio.h>
int main()
{
    int num, i, midNum = 0;
    scanf("%d", &num);
    i = 1;
    while (1)
    {
        midNum += i;
        if (midNum > num)
            break;
        i++;
    }
    printf("n=%d", (i - 1));
}