#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int n;
struct node
{
    int ned;
    int end;
};
bool opt(node x, node y)
{
    return x.end < y.end;
}
struct node t[1010];
bool judge(int tar)
{
    for (int i = 1; i < n; i++)
    {
        if (tar + t[i].ned <= t[i].end)
            tar += t[i].ned;
        else
            return 0;
    }
    return 1;
}
int main()
{
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d %d", &t[i].ned, &t[i].end);
    sort(t + 1, t + n + 1, opt);
    int l = 0, r = t[n].end, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (judge(mid))
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    printf("%d", r);
    return 0;
}