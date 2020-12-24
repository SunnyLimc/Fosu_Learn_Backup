#include <stdio.h>
#include <algorithm>
using namespace std;
int a[100005], n, c;
int judge(int mid)
{
    int i, count = 1, t = a[0]; //count是指放了几头牛，从1开始。t用来表示当前的房间号
    for (i = 1; i < n; i++)
    {
        if (a[i] - t >= mid) //判断两个房间之间的距离
        {
            count++;
            t = a[i];       //修改t的值，即修改当前房间号，例如原来t=1,a[2]=4,若a[2]-t>=mid符合，那么t=4,然后算a[3]或者a[4]与t之间的距离。
            if (count >= c) //可以放下C头牛
                return 1;
        }
    }
    return 0;
}
int binary() //二分搜索符合条件的最小距离的最大值
{
    int low = 0, high = a[n - 1] - a[0], mid;
    while (low <= high)
    {
        mid = (low + high) / 2; //mid即为最小房间号与最大房间号之间的距离
        if (judge(mid))
            low = mid + 1; //所求距离>=mid，可以继续增大试探
        else
            high = mid - 1; //所求距离<mid，所以必须减小来试探
    }
    return low - 1; //由于在之前距离+1，所以此时-1
}
int main()
{
    while (~scanf("%d%d", &n, &c))
    {
        int i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        sort(a, a + n);
        printf("%d\n", binary());
    }
    return 0;
}
