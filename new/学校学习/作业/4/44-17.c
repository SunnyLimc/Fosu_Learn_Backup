#include <stdio.h>
int main()
{
    double hr, fee;
    scanf("%lf", &hr);
    if (hr < 10)
        fee = 30;
    else if (hr >= 10 && hr <= 50)
        fee = 3 * hr;
    else
        fee = 2.5 * hr;
    printf("%.2lf", fee);
    return 0;
}
