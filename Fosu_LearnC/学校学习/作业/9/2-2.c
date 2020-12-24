#include <stdio.h>
struct sphh
{
    int a;
    int *b;
} sp[3];
int main()
{
    int i, a[3];
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 3; i++)
        scanf("%d", &sp[i].a);
    sp[0].b = &a[0];
    sp[1].b = &a[1];
    sp[2].b = &a[2];
    struct sphh *p = sp;
    printf("%d %d", ++(p->a), *++p->b);
}