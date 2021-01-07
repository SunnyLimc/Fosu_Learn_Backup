#include <stdio.h>
int arr[20000000][2];
int min(int i, int j)
{
    if (i > j)
    {
        return j;
    }
    else
    {
        return i;
    }
}

int main()
{
    int i, id, cnR = 0, cnL = 0, tol = 0;
    char in;
    scanf("%d", &i);
    i *= 2;
    while (i--)
    {
        scanf("%c %d", &in, &id);
        if (in == 'L')
        {
            cnL++;
            arr[id][0] = cnL;
            arr[id][1] = 0;
        }
        else if (in == 'R')
        {
            cnR++;
            arr[id][0] = cnR;
            arr[id][1] = 1;
        }
        else if (in == '?')
        {
            if (arr[id][1] == 0)
            {
                printf("%d\n", min(cnR + arr[id][0] - 1, cnL - arr[id][0]));
            }
            else if (arr[id][1] == 1)
            {
                printf("%d\n", min(cnL + arr[id][0] - 1, cnR - arr[id][0]));
            }
        }
    }
    return 0;
}