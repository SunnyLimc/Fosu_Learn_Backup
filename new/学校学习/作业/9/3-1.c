#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Stu)
typedef struct Stu
{
    float num, score;
    struct Stu *next;
} stu;

stu *creat()
{
    stu *head;
    head = (stu *)malloc(LEN * 100);
    return head;
}
stu *input(stu *head)
{
    stu *p;
    for (p = head;; p++)
    {
        scanf("%f %f", &p->num, &p->score);
        if (p->num == 0)
        {
            (p - 1)->next = NULL;
            break;
        }
        p->next = p + 1;
    }
}
stu *print(stu *head)
{
    stu *p;
    for (p = head;; p = p->next)
    {
        printf("%.f  %.1f\n", p->num, p->score);
        if (p->next == NULL)
            break;
    }
}
int main()
{
    stu *head;
    head = creat();
    input(head);
    print(head);
}
