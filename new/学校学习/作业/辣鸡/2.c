#include <stdio.h>
int main()
{
    int a, b;
    float d, e;
    char c1, c2;
    double f, g;
    long m, n;
    unsigned int p, q;
    a = 61;
    b = 62;
    c1 = 'a';
    c2 = 'b';
    d = 5.67;
    e = -6.78;
    f = 1234.56789;
    g = 0.123456789;
    m = 50000;
    n = -60000;
    p = 32768;
    q = 40000;
    printf("a=%d, b=%d\n", a, b);
    printf("c1=%c, c2=%c\n", c1, c2);
    printf("d=%f, e=%f\n", d, e);
    printf("f=%lf, g=%lf\n", f, g);
    printf("m=%ld, n=%ld\n", m, n);
    printf("p=%u, q=%u\n", p, q);
    return 0;
}