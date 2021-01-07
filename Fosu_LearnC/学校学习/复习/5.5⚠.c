//求Sn=a+aa+aaa+...（a为数字,n为次数)
#include <stdio.h>
int main()
{
    int sum = 0, tmp = 0, a, n;
    scanf("%d %d", &a, &n);
    for (int i = 0; i < n; i++)
    {
        sum += tmp = 10 * tmp + a;
    }
    printf("%d", sum);
}
