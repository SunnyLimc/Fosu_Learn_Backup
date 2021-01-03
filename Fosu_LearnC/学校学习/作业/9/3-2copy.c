#include <stdio.h>
#include <stdlib.h>
#define elesz sizeof(ele)
struct element
{
    int num;
    double score;
    struct element *next;
} * head;
typedef struct element ele;

void creat()
{
    ele *p;
    p = head = (ele *)malloc(elesz);
    while (scanf("%d %lf", &p->num, &p->score) && p->num != 0 && p->score != 0)
    {
        p->next = (ele *)malloc(elesz);
        p = p->next;
    }
    p->next = NULL;
}
void print()
{
    ele *p = head;
    printf("%-3s %-3s  %-3s\n", "id", "num", "score");
    for (int id = 1; p->next != NULL; p = p->next, id++)
        printf("%-3d %-3d  %-3.3lf\n", id, p->num, p->score);
}
void insert()
{
    int id, num;
    double score;
    scanf("%d %d %lf", &id, &num, &score);
    ele *p = head,
        *tmp;
    for (int i = 1; i <= id - 1; i++, p = p->next)
        ;
    tmp = p->next;
    p->next = (ele *)malloc(elesz);
    p->next->num = num;
    p->next->score = score;
    p = p->next;
    p->next = tmp;
}
void search()
{
    int num;
    scanf("%d", &num);
    ele *p = head;
    for (int id = 1; p->next != NULL; p = p->next, id++)
    {
        if (p->num == num)
        {
            printf("Find at %d", id);
            return;
        }
    }
    printf("No");
}
void del()
{
    int num;
    scanf("%d", &num);
    ele *p = head;
    for (; p->next != NULL; p = p->next)
    {
        if (p->next->num == num)
            break;
    }
    p->next = p->next->next;
}
void edit()
{
    int id;
    double score;
    scanf("%d %lf", &id, &score);
    ele *p = head;
    for (int i = 1; i != id; p = p->next, i++)
        ;
    p->score = score;
}
int main()
{
    creat();
    print();
    insert();
    print();
    search();
    del();
    print();
    edit();
    print();
}