#include <stdio.h>
#include <string.h>
typedef struct Stu
{
    char name[20], id[30];
    struct Stu *next;
} stu;

int main()
{
    int i;
    stu s[100], *head;
    head = s;
    int cnt = 0;
    for (i = 0;; i++)
    {
        scanf("%s %s", s[i].name, s[i].id);
        if (strcmp(s[i].name, "no") == 0)
        {
            s[i].next = NULL;
            break;
        }
        if (i != 0)
            s[i - 1].next = &s[i];
        cnt++;
    }
    printf("总共%d个学生（信息）：\n", cnt);
    i = 0;
    while (1)
    {
        i++;
        printf("第%d个学生信息：", i);
        printf("%s %s\n", head->name, head->id);
        if (head->next == NULL)
            break;
        else
            head = head->next;
    }
}
