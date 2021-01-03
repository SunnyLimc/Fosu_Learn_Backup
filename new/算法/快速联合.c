#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5000 //宏变量以定义数量的多少

//变量的声明
long long int id[N * N + 1], sz[N * N + 1], stat[N * N + 1];

//初始化函数
int init()
{
    for (long long int i = 1; i <= N * N; i++)
    {
        if (i <= N && i >= 1)
            id[i] = 1;
        else if (i >= N * N - (N - 1) && i <= N * N)
            id[i] = N * N;
        else
            id[i] = i;
        sz[i] = 1;
        stat[i] = 0;
    }
}

//查找根节点、路径压缩
long long int find_root(long long int i)
{
    while (id[i] != i)
    {
        id[i] = id[id[i]];
        i = id[i];
    }
    return i;
}

//判断是否联通
int connected(long long int p, long long int q)
{
    if (find_root(p) == find_root(q))
        return 1;
    else
        return 0;
}

//联合两数
void connect(long long int p, long long int q)
{
    long long int i = find_root(p);
    long long int j = find_root(q);
    if (sz[i] > sz[j])
    {
        id[j] = i;
        sz[i] += sz[j];
    }
    else
    {
        id[i] = j;
        sz[j] += sz[i];
    }
}

//联合该点与该点四周的数
void unionf(long long int p)
{
    if (p != N * N && p % N != 0)
        if (stat[p + 1] == 1)
            connect(p, p + 1);
    if (p != 1 && p % N != 1)
        if (stat[p - 1] == 1)
            connect(p, p - 1);
    if (p + N <= (N * N))
        if (stat[p + N] == 1)
            connect(p, p + N);
    if (p - N >= 1)
        if (stat[p - N] == 1)
            connect(p, p - N);
}
//判断是否连通
int check()
{
    if (connected(1, N * N) == 1)
        return 1;
    return 0;
}

//DEBUG
void debug()
{
    {
        for (long long int i = 1; i <= N * N; i++)
        {
            if (stat[i])
            {
                printf("\033[32;1m%-7c\033[0m", 'o');
            }
            else
                printf("%-7c", 'x');
            if (i % N == 0)
                printf("\n");
        }
        printf("\n");
        for (long long int i = 1; i <= N * N; i++)
        {
            printf("%-2lld", i);
            printf("\033[32;1m %-3lld\033[0m ", id[i]);
            if (i % N == 0)
                printf("\n");
        }
        printf("\n");
        for (long long int i = 1; i <= N * N; i++)
        {
            printf("%-2lld", i);
            printf("\033[32;1m %-3lld\033[0m ", find_root(i));
            if (i % N == 0)
                printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    init();
    srand((unsigned int)time(NULL));
    long long int p;
    int times = 0;
    while (1)
    {
        p = rand() % (N * N) + 1;
        if (stat[p] == 0)
        {
            stat[p] = 1;
            unionf(p);
            times++;
        }
        if (check() == 1)
            break;
    }
    // debug(); //debug
    printf("%lf", (double)times / (N * N));
}