
#include <stdio.h>
#include <math.h>
int sushu(int x)
{
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, tax;
    scanf("%d", &n);
    if (n == 2)
        tax = 1; //2是素数
    else if (n % 2 == 0)
        tax = 2; //欧拉定理，大于2的偶数可以为两个素数之和
    else if (sushu(n))
        tax = 1;
    else if (sushu(n - 2))
        tax = 2;
    else
        tax = 3;
    printf("%d", tax);
}
