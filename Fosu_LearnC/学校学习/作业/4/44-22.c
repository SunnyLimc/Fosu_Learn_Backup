#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int numL, i, targetNum, num[100];
    char target[100];
    scanf("%s", &target);
    targetNum = atoi(target);
    numL = strlen(target);
    if (numL > 5)
    {
        return 0;
    }
    for (i = numL; i != 0; i--)
    {
        num[i] = (int)((targetNum / (int)pow(10, (i - 1))) % 10);
    }
    for (i = 1; i <= numL; i++)
    {
        printf("%d", num[i]);
    }
    return 0;
}