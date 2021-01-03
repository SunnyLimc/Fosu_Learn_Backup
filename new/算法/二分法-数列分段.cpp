#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
int a[10001];
int n, c;
using std::sort;
bool judge(int mid)
{
    int now=0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            return false;
        if (now + a[i] > mid)
        {
            now = 0;
            cnt++;
        }
        now += a[i];
    }
    return cnt <= c;
}
int main()
{
    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n - 1);
    int l = a[0], r = a[n - 1], mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (judge(mid))
            r = mid - 1;
        else
            l = mid + 1;
    }
    printf("%d", l);
}