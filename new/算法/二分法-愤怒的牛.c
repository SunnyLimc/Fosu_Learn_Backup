#include <stdio.h>
int N, c;
long long int a[1000000];
int judge(long long int mid)
{
    for (int i = 1, count = 1, tmp = a[0]; i <= N; i++)
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
void sort(long long int a[])
{
    for (int i = 0, tmp, min; i < N; i++)
    {
        for (int j = min = i; j < N; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}
int main()
{
    long long int mid, ans;
    scanf("%d %d", &N, &c);
    for (int i = 0; i < N; i++)
        scanf("%lld", &a[i]);
    sort(a);
    // for (int i = 0; i < N; i++)
    //     printf("%lld ", a[i]); //for test sort
    long long int l = a[0], r = a[N - 1] - a[0];
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (judge(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    printf("%lld", ans);
}