#include <stdio.h>

int main()
{
    int num[100], i, j, numL, numCor[100], total = 0, tmp;

    scanf("%d", &i);
    i = 0;
    do
    {
        scanf("%d", &num[i]);
        numL = i;
        i++;
    } while (getchar() != '\n');

    for (int i = 0; i < numL; i++)
    {
        total = 0;
        for (j = 0; j < numL - i; j++)
        {
            if (num[j] <= num[j + 1])
            {
                numCor[j] = 1;
            }
            else
            {
                numCor[j] = 0;
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
            total += numCor[j];
        }
    }

    scanf("%d", &num[numL + 1]);
    numL++;

    for (int i = 0; i < numL; i++)
    {
        total = 0;
        for (j = 0; j < numL - i; j++)
        {
            if (num[j] <= num[j + 1])
            {
                numCor[j] = 1;
            }
            else
            {
                numCor[j] = 0;
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
            total += numCor[j];
        }
    }
    printf("The new array is:\n");
    for (i = 0; i <= numL; i++)
    {
        printf("%4d", num[i]);
    }

    return 0;
}