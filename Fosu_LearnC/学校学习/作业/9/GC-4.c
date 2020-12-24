#include <stdio.h>

int main(void)

{

    union Num

    {

        int i;

        char ch;

        float f;

    } a;

    a.i = 106;

    printf("%d\n", a.i);

    return 0;
}
