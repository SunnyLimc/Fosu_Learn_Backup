#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Stu)
typedef struct Stu
{
    char name[20];
    long long int id;
    struct Stu *next;
} stu;

int main()
{
    int i;
    long long int n;
    stu s[100], *head, *p;
    head = s;
    for (p = head;; p = p->next)
    {
        scanf("%s %lld", p->name, &p->id);
        if (p->id == 0)
        {
            (p - 1)->next = NULL;
            break;
        }
        p->next = p + 1;
    }
    scanf("%lld", &n);
    for (p = head; p->id != n; p = p->next)
        ;
    if (p->next == NULL)
    {
        p->next = (stu *)malloc(LEN);
        p->next->next = NULL;
        scanf("%s %lld", p->next->name, &p->next->id);
    }
    else
    {
        stu *tmp;
        tmp = p->next;
        p->next = (stu *)malloc(LEN);
        p->next->next = tmp;
        scanf("%s %lld", p->next->name, &p->next->id);
    }
    for (p = head;; p = p->next)
    {
        printf("%s,%lld\n", p->name, p->id);
        if (p->next == NULL)
            break;
    }
}
