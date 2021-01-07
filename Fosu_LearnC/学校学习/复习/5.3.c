// 求最大公约数和最小公倍数
#include <stdio.h>
// int main()
// {
//     int m, n, zdgys, zxgbs;
//     scanf("%d %d", &m, &n);
//     for (int i = (m > n ? m : n);; i++)
//         if (i % m == 0 && i % n == 0)
//         {
//             zxgbs = i;
//             break;
//         }
//     for (int i = (m > n ? n : m);; i--)
//         if (m % i == 0 && n % i == 0)
//         {
//             zdgys = i;
//             break;
//         }
//     printf("%d %d", zdgys, zxgbs);
// }
// old version

//尝试用欧几里得
#include <stdio.h>
int main()
{
    int a, b, mult;
    scanf("%d %d", &a, &b);
    mult = a * b;
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    int zdgys = b, zxgbs;
    zxgbs = mult / zdgys;
    printf("zxgbs:%d\nzdgys:%d\n", zxgbs, zdgys);
}
