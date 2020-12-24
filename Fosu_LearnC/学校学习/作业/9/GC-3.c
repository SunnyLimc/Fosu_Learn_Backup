#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(node)
typedef struct Node
{
    int num;
    struct Node *next;
} node;

int main(void)

{
    node *head, *new, *p;
    int num = 1, init = 0;
    printf("请输入编号:\n");
    while (num != 0)
    {
        scanf("%d", &num);
        if (init == 0)
        {
            head = new = (node *)malloc(LEN);
            init = 1;
        }
        else
            new = (node *)malloc(LEN);
        new->num = num;
        if (num == 0)
        {
            p->next = new;
            new->next = NULL;
        }
        else
            p->next = new;
        p = new;
    }

    printf("The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:The single linked list is:");
    printf("The single linked list is:\n");

    for (p = head; p->next != NULL; p = p->next)
        printf("%d\n", p->num);

    return 0;
}