#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(stu)
struct Stu
{
    float num, score;
    struct Stu *next;
};
typedef struct Stu stu;
stu *head;

int initial = 0; //是否已经初始化

stu *findLast() //查找链表最后的位置
{
    stu *p;
    if (head == NULL) //链表为空
        return -1;
    for (p = head; p->next != NULL; p = p->next)
        ;
    return p;
}

stu *findLot(int id) //查找链表指定位置并返回该位置地址
{
    int i;
    stu *p;
    if (head == NULL) //链表未初始化
        return -1;
    for (i = 0, p = head;; i++, p = p->next)
    {
        if (p->next == NULL)
            return -1; //已经到末端也找不到
        if (i == id - 1)
            break;
    }
    return p;
}

void creat()
{
    int i;
    stu *p;
    if (initial == 0) //若未初始化
    {
        p = head = (stu *)malloc(LEN);
        initial = 1;
    }
    else //已初始化
    {
        p = findLast(); //调用函数找到链表末端
        p->next = (stu *)malloc(LEN);
    }

    while (1)
    {
        scanf("%f %f", &p->num, &p->score);
        if (p->num == 0)
        {
            p->next = NULL;
            break;
        }
        p->next = (stu *)malloc(LEN);
        p = p->next;
    }
}

int del(int id)
{
    stu *p;
    if (findLot(id) == -1)
        return -1;
    else
        p = findLot(id);

    if (p == head) //删除链表头的操作
        head = p->next;
    else if (p->next == NULL) //删除链表尾部
    {
        p = findLot(id - 1); //查找上一个位置
        p->next = NULL;
    }
    else
    {
        p = findLot(id - 1);     //查找上一个位置
        p->next = p->next->next; //直接让上一个位置的next为下下个位置(等于跳过了中间位置实现了对中间位置的删除)
    }
}

int insert(int id, float num, float score)
{
    stu *p, *new;

    if (findLot(id) == -1)
        return -1;
    else
        p = findLot(id);

    new = (stu *)malloc(LEN);
    new->num = num;
    new->score = score;

    if (p->next == NULL) //当插入点在链表尾的操作
    {
        new->next = NULL;
        p->next = new;
    }
    else
    {
        new->next = p->next;
        p->next = new;
    }
}

int edit(int id, float num, float score)
{
    stu *p, *new;

    if (findLot(id) == -1)
        return -1;
    else
        p = findLot(id);

    p->num = num;
    p->score = score;
}

int printId(int id)
{
    stu *p;
    int i;
    if (head == NULL) //链表未初始化
        return -1;
    for (i = 1, p = head;; i++, p = p->next)
    {
        if (p->next == NULL)
            return -1; //已经到末端也找不到
        if (i == id)
            break;
    }
    printf("%g %g", p->num, p->score);
}

int printSearchByScore(float score)
{
    int i, cnt = 0;
    stu *p;
    if (head == NULL) //链表未初始化
        return -1;
    for (i = 1, p = head;; i++, p = p->next)
    {
        if (p->next == NULL)
            break; //已经到末端也找不到
        if (p->score == score)
        {
            printf("找到此分数，在链表的第%d个位置\n", i);
            cnt++;
        }
    }
    if (cnt == 0)
        return -1;
}

int printSearchByNum(float num)
{
    int i, cnt = 0;
    stu *p;
    if (head == NULL) //链表未初始化
        return -1;
    for (i = 1, p = head;; i++, p = p->next)
    {
        if (p->next == NULL)
            break; //已经到末端也找不到
        if (p->num == num)
        {
            printf("找到此分数，在链表的第%d个位置\n", i);
            cnt++;
        }
    }
    if (cnt == 0)
        return -1;
}

int printAll()
{
    stu *p;
    if (head == NULL) //链表未初始化
        return -1;
    for (p = head; p->next != NULL; p = p->next)
    {
        printf("%g %g\n", p->num, p->score);
    }
    if (p == head) //链表为空
        return -1;
}

int main(void)
{
    int ctrl;
    while (1)
    {
        printf("请输入要进行的操作数字：\n    1 创建\n    2 插入\n    3 修改(通过位置)\n    4 删除\n    5 输出指定位置数据\n    6 查找(通过学号)\n    7 查找(通过分数)\n    8 输出整个链表\n");
        scanf("%d", &ctrl);

        switch (ctrl)
        {
            int id;
            float value1, value2;
        case 1:
            printf("请初始化要创建的链表(格式:学号 分数)(输入0 0结束)\n");
            creat();
            break;

        case 2:
            printf("请输入要插入的位置(会在此节点后插入)(起始点为1)\n");
            scanf("%d", &id);
            printf("请输入要插入的值\n");
            scanf("%f %f", &value1, &value2);
            if (insert(id, value1, value2) == -1)
                printf("插入失败，不存在此节点\n");
            break;

        case 3:
            printf("请输入要修改的位置(起始点为1)\n");
            scanf("%d", &id);
            printf("请输入要修改的值\n");
            scanf("%f %f", &value1, &value2);
            if (edit(id, value1, value2) == -1)
                printf("修改失败，不存在此节点\n");
            break;

        case 4:
            printf("请输入要删除的位置(起始点为1)\n");
            scanf("%d", &id);
            if (del(id) == -1)
                printf("删除失败，不存在此节点\n");
            break;

        case 5:
            printf("请输入要输出的位置(起始点为1)\n");
            scanf("%d", &id);
            if (printId(id) == -1)
                printf("不存在此节点\n");
            break;

        case 6:
            printf("请输入要查找的学号\n");
            scanf("%f", &value1);
            if (printSearchByNum(value1) == -1)
                printf("不存在此学号\n");
            break;

        case 7:
            printf("请输入要查找的分数\n");
            scanf("%f", &value1);
            if (printSearchByScore(value1) == -1)
                printf("不存在此分数\n");
            break;

        case 8:
            if (printAll() == -1)
                printf("链表为空\n");
            break;

        default:
            printf("请输入正确的操作\n");
        }
        printf("按回车键继续(按ctrl+z结束程序)\n");
        getchar();
        getchar();
    }
}