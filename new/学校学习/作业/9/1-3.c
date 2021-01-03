#include <stdio.h>
int main()
{
    int n, qua[100], pri[100], i;
    scanf("%d", &n);
    int sort(int[], int[], int);
    for (i = 0; i < n; i++)
        scanf("%d", &qua[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &pri[i]);
    sort(qua, pri, n);
    for (i = 0; i < n; i++)
        printf("%d %d\n", qua[i], pri[i]);
}
int sort(int qua[], int pri[], int n)
{
    int i, j, min, max, tmp;
    int ctrl = 0, start, end;
    for (i = 0; i < n; i++)
    {
        min = qua[i];
        for (j = i; j < n; j++)
            if (qua[j] < min)
            {
                tmp = qua[j];
                qua[j] = qua[i];
                qua[i] = tmp;
                tmp = pri[j];
                pri[j] = pri[i];
                pri[i] = tmp;
            }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (qua[i] == qua[i + 1] && ctrl == 0)
        {
            start = i;
            ctrl = 1;
        }
        if (qua[i] != qua[i + 1] && ctrl == 1)
        {
            end = i;
            ctrl = 2;
        }
        if (ctrl == 2)
        {
            for (i = start; i < end; i++)
            {
                max = pri[i];
                for (j = i; j < end; j++)
                    if (pri[j] > max)
                    {
                        tmp = qua[j];
                        qua[j] = qua[i];
                        qua[i] = tmp;
                        tmp = pri[j];
                        pri[j] = pri[i];
                        pri[i] = tmp;
                    }
            }
            ctrl = 0;
        }
    }
}
