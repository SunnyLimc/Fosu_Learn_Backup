#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch ((a / 10))
    {
    case 0:;
    case 1:;
    case 2:;
    case 3:;
    case 4:;
    case 5:
        printf("m=1");
        break;
    case 6:
        printf("m=2");
        break;
    case 7:
        printf("m=3");
        break;
    case 8:
        printf("m=4");
        break;
    default:
        printf("m=5");
    }
    return 0;
}