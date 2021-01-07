#include <stdio.h>
int main()
{
    int hr12, hr24, min;
    int flag;
    scanf("%d:%d", &hr24, &min);
    if (hr24 >= 0 && hr24 <= 11)
    {
        flag = 0; //0 is AM
    }
    else
    {
        flag = 1;
    }

    if (hr24 == 0 || hr24 == 12)
    {
        hr12 = 12;
    }
    else if (flag == 1)
    {
        hr12 = hr24 - 12;
    }
    else
    {
        hr12 = hr24;
    }

    if (flag == 0)
    {
        printf("%02d:%02d AM", hr12, min);
    }
    if (flag == 1)
    {
        printf("%02d:%02d PM", hr12, min);
    }

    return 0;
}