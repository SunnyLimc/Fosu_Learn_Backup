#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(node)
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node *head, *p, *new;
int main()
{
    int i, init = 0, dead = 3, tCnt;
    scanf("%d", &tCnt);

    for (i = 1; i <= tCnt; i++)
    {
        if (init == 0)
        {
            new = head = (node *)malloc(LEN);
            init = 1;
        }
        else
        {
            new = (node *)malloc(LEN);
            p->next = new;
        }
        new->value = i;
        p = new;
    }
    p->next = head;

    p = head;
    while (p->next != p)
    {
        for (i = 0; i < dead - 2; i++, p = p->next)
            ;
        p->next = p->next->next;
        p = p->next;
    }
    printf("The last one is NO.%d", p->value);
}
