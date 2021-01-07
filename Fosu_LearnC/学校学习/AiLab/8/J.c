#include <stdio.h>
int main()
{
    char a[3][4];
    int cntK[4] = {0}, cntO[4] = {0}, cntB[4] = {0}, i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4;)
        {
            scanf("%c", &a[i][j]);
            if (a[i][j] != ' ')
                j++;
        }
    for (i = 0; i < 3; i++)
    {
        cntK[0] = cntB[0] = cntK[2] = cntB[2] = 0;
        if (a[i][i] == 'K')
            cntK[1]++;
        else if (a[i][i] == 'B')
            cntB[1]++;
        if (a[i][2 - i] == 'K')
            cntK[3]++;
        else if (a[i][2 - i] == 'B')
            cntB[3]++;
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 'K')
                cntK[0]++;
            else if (a[i][j] == 'B')
                cntB[0]++;
            if (a[j][i] == 'K')
                cntK[2]++;
            else if (a[j][i] == 'B')
                cntB[2]++;
        }
        if (cntK[0] == 3 || cntK[1] == 3 || cntK[2] == 3 || cntK[3] == 3)
        {
            printf("KiKi wins!");
            return 0;
        }
        if (cntB[0] == 3 || cntB[1] == 3 || cntB[2] == 3 || cntB[3] == 3)
        {
            printf("BoBo wins!");
            return 0;
        }
    }
    printf("No winner!");
    return 0;
}