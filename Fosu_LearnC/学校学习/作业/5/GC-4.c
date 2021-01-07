#include <stdio.h>

int main(void)

{

    int r;

    float area;

    for (r = 1; r <= 10; r++)

    {

        area = 3.141593 * r * r;

        if (area > 100.0)

            break;

        printf("radius=%d, area=%.2f\n", r, area);
    }

    printf("The current radius is:%2d\n", r);

    return 0;
}
