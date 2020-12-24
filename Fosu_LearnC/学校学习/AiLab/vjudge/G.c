#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, i, flag = 1, sum = 0, cnt = 0;
    scanf("%lld", &n);
    if (n != 2 && n % 2 == 0)
    {
        printf("2");
        return 0;
    } // 以上是大于2的偶数情况直接用哥德巴赫
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0 && n != i)
        {
            flag = 0;
            break;
        }
    if (flag == 0)
    {
        flag = 2; //多打了个等于号 TT
        for (i = 2; i <= sqrt(n - 2); i++)
            if ((n - 2) % i == 0)
            {
                flag = 0; //多打了个等于号 TT
                break;
            }
    } // 当前数减2为质数的特殊情况
    if (flag == 1)
        printf("1"); // 如果是质数直接等于1
    else if (flag == 2)
        printf("2"); // 特殊情况
    else
        printf("3"); // 偶数(而偶数可用哥德巴赫)+奇数(只有奇数才有质数)才等于奇数
}