#include <stdio.h>
#include <string.h>
typedef struct Stu
{
    char name[20], id[30];
    struct Stu *next;
} stu;

int main()
{
    int i, n;
    stu s[100], *head, *p;
    head = s;
    for (p = head;; p = p->next)
    {
        scanf("%s %s", p->name, p->id);
        if (strcmp(p->id, "0") == 0)
        {
            (p - 1)->next = NULL;
            break;
        }
        p->next = p + 1;
    }
    scanf("%d", &n);
    for (i = 0, p = head; i < n - 1; i++, p = p->next)
        ;
    if (p == head)
        head = p->next;
    else if (p->next == NULL)
        (p - 1)->next = NULL;
    else
        (p - 1)->next = p->next;

    for (p = head;; p = p->next)
    {
        printf("%s,%s\n", p->name, p->id);
        if (p->next == NULL)
            break;
    }
}
