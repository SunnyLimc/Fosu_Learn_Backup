#include <stdio.h>
struct man
{
    char name[20];
    int age;
} person[3] = {"li", 18, "wang", 25, "sun", 22};
int main()
{
    int maxid, i;
    maxid = 0;
    for (i = 0; i < 3; i++)
        if (person[i].age > person[maxid].age)
            maxid = i;
    printf("%s %d", person[maxid].name, person[maxid].age);
}