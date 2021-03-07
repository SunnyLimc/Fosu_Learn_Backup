#include <bits/stdc++.h>
int l = 1000;
int y = 2014;
int m = 11;
int d = 9;
int getD(int M)
{
    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
    {
        return 31;
    }
    else if (M == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0))
    {
        return 29;
    }
    else if (M == 2)
    {
        return 28;
    }
    else
    {
        return 30;
    }
}
void cal()
{
    if (getD(m) > l)
    {
        d += l;
        l = 0;
    }
    else if (m == 12 && getD(m) < l)
    {
        l -= 31;
        d = 0;
        m = 1;
        y++;
    }
    else if (d == 0)
    {
        l -= getD(m);
        m++;
    }
    else
    {
        l -= (getD(m) - d);
        d = 0;
        m++;
    }
}
int main()
{
    while (l != 0)
    {
        cal();
    }
    printf("%d %d %d", y, m, d);
}