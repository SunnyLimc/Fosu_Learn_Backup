//输入3个整数，按从小到大输出
#include <stdio.h>
int main()
{
    int a[3], *min, *p;
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++)
    {
        min = &a[i];
        p = &a[i + 1];
        for (int j = i + 1; j < 3; j++, p++)
            if (*p < *min)
                min = p;
        if (a[i] != *min)
        {
            *min += a[i];
            a[i] = *min - a[i];
            *min = *min - a[i];
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%d ", a[i]);
}
