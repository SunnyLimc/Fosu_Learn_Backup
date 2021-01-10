#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define st 4
#define cls 5

#define LEN sizeof(struct linknode)
struct linknode
{
    struct linknode *next;
    int id;
} * head;
typedef struct linknode node;
int isRemindInLinknode(int match)
{
    node *p = head;
    for (; p->next != NULL; p = p->next)
        if (p->id == match)
            return 1;
    return 0;
}

char* itoa(int num){

    
}

void input()
{

    FILE *fp;
    int input = 0;
    printf("select what you want to do.\n1. just add\n2. reset & add\n");
    while (input != 1 && input != 2)
    {
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            fp = fopen("8.15.c.txt", "a+");
            printf("You selected %d\n\n", input);
            break;
        case 2:
            fp = fopen("8.15.c.txt", "w+");
            printf("You selected %d\n\n", input);
            break;
        default:
            printf("input error.");
        }
    }
    node *p;
    p = head = (node *)malloc(LEN);
    for (int i = 0; i < st; i++)
    {
        int sw;
        printf("Please input %dnd stu ID: ", i + 1);
        scanf("%d", &p->id);
        while (isRemindInLinknode(p->id))
        {
            printf("This ID %d has benn used, pls use another.(press ENTER)", p->id);
            getchar();
            getchar();
            printf("Please input %dnd stu ID: ", i + 1);
            scanf("%d", &p->id);
        }
        while()
        p->next = (node *)malloc(LEN);
        fprintf(fp, "%d ", p->id);
        p = p->next;
        for (int j = 0; j < cls; j++)
        {
            int tmp;
            printf("Please input %dnd stu %d class score: ", i + 1, j + 1);
            scanf("%d", &tmp);
            while (tmp < 0 || tmp > 100)
            {
                printf("This ID %d has benn used, pls use another.(press ENTER)", p->id);
                getchar();
                getchar();
                printf("Please input %dnd stu %d class score: ", i + 1, j + 1);
                scanf("%d", &tmp);
            }
            fprintf(fp, "%d ", tmp);
        }
        printf("\n");
        fprintf(fp, "\n");
        fflush(fp);
    }
    p->id = -1;
    p->next = NULL;
}
int main()
{
    input();
}