#include <bits/stdc++.h>
int main()
{
    int done = 0;
    for (int i = 10000; i <= 99999; i++)
    {
        for (int tmp = i; tmp != 0; tmp /= 10)
        {
            if (tmp % 10 == 4)
            {
                done++;
                break;
            }
        }
    }
    done = (99999 - 10000) + 1 - done;
    printf("%d", done);
    system("pause");
}