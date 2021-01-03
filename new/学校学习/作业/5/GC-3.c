#include <stdio.h>

int main(void)

{

    float sn = 100.0, hn = sn / 2;

    int n;

    for (n = 2; n <= 10; n++)
    {

        sn = sn + 2 * hn;

        hn = hn / 2;
    }
    printf("the total of road is %.2f meter\n", sn);

    printf("the tenth is %.3f meter\n", hn);

    return 0;
}