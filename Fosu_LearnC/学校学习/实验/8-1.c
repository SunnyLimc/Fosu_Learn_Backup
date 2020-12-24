#include <stdio.h>
typedef struct Infor
{
    char name[20];
    int no, age;
    char sex;
} inf;
int main()
{
    inf s[100];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(stdin, "%d %s %c %d", &s[i].no, s[i].name, &s[i].sex, &s[i].age);
    }
    for (i = 0; i < n; i++)
    {
        printf("%6d%11s%3c%6d\n", s[i].no, s[i].name, s[i].sex, s[i].age);
    }
}
