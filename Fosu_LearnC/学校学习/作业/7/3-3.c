//闲来无事玩使用指针
#include <stdio.h>
float fxxkElementType(float *p, float *s, int n, int cnt)
{
    *s += *p;
    if (n == 1)
        return *s / cnt;
}
int main()
{
    int n, i, cnt = 0;
    float sum = 0, tmp, fin, *p, *s;
    p = &tmp;
    s = &sum;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &tmp);
        cnt++;
        if (i != n - 1)
            fxxkElementType(p, s, 0, 0);
        else
            fin = fxxkElementType(p, s, 1, cnt);
    }
    printf("%.2f", fin);
}
