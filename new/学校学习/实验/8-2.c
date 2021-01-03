#include <stdio.h>
typedef struct Infor inf;
struct Infor
{
    int val;
    inf *next;
} * head, *p;
int main()
{
    int n, i;
    scanf("%d", &n);
    inf s[n];
    head = s;
    for (i = 0, p = head; i < n; i++, p++)
    {
        fscanf(stdin, "%d", &p->val);
        if (i == n - 1)
            p->next = NULL;
        else
            p->next = p + 1;
    }
    for (p = head;;)
    {
        printf("%d ", p->val);
        if (p++->next == NULL)
            break;
    }
}
