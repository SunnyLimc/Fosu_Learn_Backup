#include <stdio.h>
int main()
{
    int a, b, max, min;
    int maxf(int, int);
    int minf(int, int);
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    } //a��b������С���ɡ�ΪʲôҪ����ab���ɲο�C����100��ĵ�16���е�շת�������
    max = maxf(a, b);
    min = minf(a, b);
    printf("%d %d", max, min);
    return 0;
}

int maxf(int a, int b)
{
    int r;
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
//��ʵ�����ǲ���
int minf(int a, int b)
{
    int r, n;
    n = a * b;
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return n / b;
}