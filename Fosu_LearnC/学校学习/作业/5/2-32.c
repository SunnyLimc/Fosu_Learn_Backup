#include <stdio.h>
int main()
{
    int gm, sm, gn, sn;
    int i, j;
    for (i = 1; i < 100; i++)
    {
        for (j = 1; j < 100; j++)
        {
            gm = i % 10;
            sm = i / 10;
            gn = j % 10;
            sn = j / 10;
            if (((double)i / j == (double)sm / gn) && gm == sn)
            {
                printf("%d/%d\n", i, j);
            }
        }
    }
    return 0;
}