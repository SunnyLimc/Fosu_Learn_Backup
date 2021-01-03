#include <stdio.h>
int main(void)

{

    struct Friends_list

    {

        char name[10];

        int age;

        char telephone[13];
    };

    struct Friends_list friend1 = {"zhang", 24, "82982543"}, *p;

    p = &friend1;

    printf("%s %d %s\n", p->name, p->age, p->telephone);

    return 0;
}