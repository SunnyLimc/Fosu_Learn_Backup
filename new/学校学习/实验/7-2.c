#include <stdio.h>
int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    int *p = a, i, tmp, f = 1;
    scanf("%d", &tmp);
    for (i = 0; i < 10; i++, p++)
    {if(tmp<)
        printf("%d ", *p);
        if ((tmp >= *p && tmp < *(p + 1) || tmp >= *p && i == 9) && f == 1)
        {
            printf("%d ", tmp);
            f = 0;
        }
    }
}