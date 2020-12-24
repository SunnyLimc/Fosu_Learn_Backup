#include <stdio.h>
#define N 10
int id[N];
int find_root(int i)
{
    while (i != id[i])
    {
        i = id[i];
    }
}
int news()
{
    for (int i = 0; i < N; i++)
    {
        id[i] = i;
    }
}
int connected(int p, int q)
{
    return find_root(p) == find_root(q);
}
int connect(int p, int q)
{
    int i = find_root(p);
    int j = find_root(q);
    id[i] = j;
}
int main()
{
    news();
    while (1)
    {
        printf("请输入要联合的p和q\n");
        int p, q;
        scanf("%d %d", &p, &q);
        connect(p, q);
        printf("请输入要查询的p和q\n");
        scanf("%d %d", &p, &q);
        if (connected(p, q))
            printf("同根\n");
        else
            printf("不同根\n");
    }
}