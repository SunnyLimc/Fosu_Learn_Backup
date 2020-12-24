#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//长度定义
#define LEN sizeof(LB)
//结构体定义
typedef struct LianBiao LB;
struct LianBiao
{
    char value[20];
    LB *next;
};
LB *head;
//声明
LB *findNow();
LB *locationId(int id);
// int *findByValue(char target[]);
int print();
//变量
int init = 0;
int creat(int count)
{
    LB *p;
    int i;
    if (init == 0)
    {
        p = head = (LB *)malloc(LEN * count);
        // printf("初始化成功,头地址为%d\n", head);
    }
    //👆若无则初始化
    else
    {
        p = findNow(); //找到末端
        // printf("末端地址为%d\n", p);
        p->next = (LB *)malloc(LEN * count);
        // printf("下一个的地址是%d\n", p->next);
    }
    for (i = 0;; i++, p = p->next)
    {
        // printf("创建第%lld个结构体,地址为%d\n", i, p);
        if (i == count - 1)
        {
            p->next = NULL;
            break;
        }
        else
        {
            p->next = p + 1;
        }
    }
}
int input()
{
    LB *p;
    for (p = head;; p = p->next)
    {
        scanf("%s", p->value);
        // printf("结构体值为%s的地址是%d\n", p->value, p);
        if (p->next == NULL)
            break;
    }
}
LB *findNow()
{
    LB *p;
    for (p = head;; p = p->next)
        if (p->next == NULL)
            break;
    return p;
}
LB *locationId(int id)
{
    LB *p;
    int i;
    for (p = head, i = 0; i < id; i++, p = p->next)
        if (p->next == NULL)
            return (LB *)-1;
    return p;
}
int insert(int id, char value[])
{
    LB *p, *tmp;
    if (locationId(id) == (LB *)-1)
    {
        printf("不存在此ID,不添加任何数据\n");
        return -1;
    }
    else
        p = locationId(id);
    if (p == head)
    {
        p = (LB *)malloc(LEN);
        p->next = head;
        strcpy(p->value, value);
        head = p;
    }
    else
    {
        tmp = (LB *)malloc(LEN);
        strcpy(tmp->value, p->value);
        tmp->next = p->next;
        p->next = tmp;
        strcpy(p->value, value);
    }
}
int del(int id)
{
    LB *p, *tmp;
    if (locationId(id) == (LB *)-1)
    {
        printf("不存在此ID,不删除任何数据\n");
        return -1;
    }
    else
        p = locationId(id);
    if (p == head)
        head = p->next;
    else
    {
        p = locationId(id - 1);
        p->next = p->next->next;
    }
}
int editByValue(int id, char value[])
{
    LB *p, *tmp;
    if (locationId(id) == (LB *)-1)
    {
        printf("不存在此ID,不修改任何数据\n");
        return -1;
    }
    else
        p = locationId(id);
    strcpy(p->value, value);
}
int print()
{
    LB *p;
    // printf("输出内容:\n");
    for (p = head;; p = p->next)
    {
        printf("%s ", p->value);
        if (p->next == NULL)
        {
            printf("\n");
            break;
        }
    }
}
int findByValue(char target[])
{
    LB *p;
    int i;
    for (i = 0, p = head;; i++, p = p->next)
    {
        if (strcmp(p->value, target) == 0)
            return i;
        else if (p->next == NULL)
            return -1;
    }
}
int main(void)
{
    int n;
    char value[20];
    // 创建
    {
        scanf("%d", &n);
        creat(n);
        input();
        print();
    }
    // 插入
    {
        scanf("%d %s", &n, value);
        insert(n, value);
        print();
    }
    // 查询
    {
        scanf("%s", value);
        if (findByValue(value) == -1)
            printf("NO\n");
        else
            printf("Find at : %d\n", findByValue(value));
        print();
    }
    // 删除
    {
        scanf("%d", &n);
        del(n);
        print();
    }
    // 修改
    {
        scanf("%d %s", &n, value);
        editByValue(n, value);
        print();
    }
}