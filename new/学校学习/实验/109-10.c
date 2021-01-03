#include <stdio.h>
#include <math.h>

int main()
{
    int money, sw;
    scanf("%d", &money);
    double n1, n2, n4, n6, n10, npp;
    n1 = money * 0.01;
    n2 = n1 + (money - 100000) * 0.075;
    n4 = n2 + (money - 200000) * 0.05;
    n6 = n4 + (money - 400000) * 0.03;
    n10 = n6 + (money - 600000) * 0.015;
    npp = n10 + (money - 1000000) * 0.01;
    sw = money / 100000;
    //switch 实现
    switch (sw)
    {
    case 0:
        printf("%lf\n", n1);
        break;
    case 1:
        printf("%lf\n", n2);
        break;
    case 2:
    case 3:
        printf("%lf\n", n4);
        break;
    case 4:
    case 5:
        printf("%lf\n", n6);
        break;
    case 7:
    case 8:
    case 9:
        printf("%lf\n", n10);
        break;
    default:
        printf("%lf\n", npp);
    }
    //IF实现
    if (money <= 100000)
    {
        printf("%lf\n", n1);
    }
    else if (money >= 100000 && money < 200000)
    {
        printf("%lf\n", n2);
    }
    else if (money >= 100000 && money < 200000)
    {
        printf("%lf\n", n2);
    }
    else if (money >= 200000 && money < 400000)
    {
        printf("%lf\n", n4);
    }
    else if (money >= 400000 && money < 600000)
    {
        printf("%lf\n", n6);
    }
    else if (money >= 600000 && money < 1000000)
    {
        printf("%lf\n", n10);
    }
    else
    {
        printf("%lf\n", npp);
    }
    return 0;
}