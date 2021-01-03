#include <stdio.h>
int main()
{
    double l, bonus;
    scanf("%lf", l);
    if (l <= 100000)
    {
        bonus = l * 0.1;
    }
    else if (l > 100000 && l <= 200000)
    {
        
        bonus = 100000 * 0.1 + (l - 100000) * 0.075;
    }
    else if (l > 200000 &&l <= 300000)
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.2 + (l - 200000) * 0.005;
    }
    if (l <= 100000)
    {
        bonus = l * 0.1;
    }
    if (l <= 100000)
    {
        bonus = l * 0.1;
    }
    if (l <= 100000)
    {
        bonus = l * 0.1;
    }
}
