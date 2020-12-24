#include <stdio.h>
int input(int a[][10])
{
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d %d %d", &a[0][i], &a[1][i], &a[2][i]);
    return 0;
}
int sort(int a[][10])
{
    int i, j, temp, swit;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
            if (a[0][j] > a[0][j + 1])
            {
                for (swit = 0; swit < 3; swit++)
                {
                    temp = a[swit][j];
                    a[swit][j] = a[swit][j + 1];
                    a[swit][j + 1] = temp;
                }
            }

    return 0;
}
int find(int n, int a[][10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (a[0][i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[3][10], n, i;
    input(a);
    sort(a);
    scanf("%d", &n);
    i = find(n, a);
    if (i == -1)
        printf("Can't find");
    else
        printf("score:  %d  %d", a[1][i], a[2][i]);
    return 0;
}