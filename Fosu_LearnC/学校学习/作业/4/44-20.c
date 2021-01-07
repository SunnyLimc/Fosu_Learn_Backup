#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int numL, i, targetNum, num[100];
    char target[100];
    scanf("%s", &target);
    targetNum = atoi(target);
    numL = strlen(target);
    if (numL >= 5)
        return 0;
    else
        printf("%d", numL);
    return 0;
}