#include <bits/stdc++.h>
int a[10];
int v[10];
void dfs(int s)
{
    if (s == 9)
    {
        int x = a[1] * 1000 + a[2] * 100 + a[3] * 10 + a[4];
        int y = a[5] * 1000 + a[6] * 100 + a[7] * 10 + a[2];
        int z = a[5] * 10000 + a[6] * 1000 + a[3] * 100 + a[2] * 10 + a[8];
        if (x + y == z && a[5] != 0)
        {
            printf("%d ", y);
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                a[s] = i;
                dfs(s + 1);
                v[i] = 0;
            }
        }
    }
}

int main()
{
    dfs(0);
}