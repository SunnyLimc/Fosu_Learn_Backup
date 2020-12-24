#include <iostream>
#include <algorithm>
int n, c;
long long int a[1000000];
using std::cout;
using std::endl;
using std::sort;
bool judge(int mid)
{
    int count = 1, tmp = a[1], i;
    for (i = 2; i <= n; i++)
    {
        if (a[i] - tmp >= mid)
        {
            tmp = a[i];
            count++;
        }
        if (count == c)
            return 1;
    }
    return 0;
}
int main()
{
    int i, mid;
    scanf("%d %d", &n, &c);
    for (i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    sort(a + 1, a + i - 1);
    int l = a[1], r = a[i - 1] - a[1];
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (judge(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    printf("%d", r);
}