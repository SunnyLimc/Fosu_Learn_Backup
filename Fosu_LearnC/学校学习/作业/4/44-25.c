#include <stdio.h>
int main()
{
    int swi;
    scanf("%d", &swi);
    switch (swi)
    {
    case 0:
        printf("你喜欢的颜色是红色");
        break;
    case 1:
        printf("你喜欢的颜色是橙色");
        break;
    case 2:
        printf("你喜欢的颜色是绿色");
        break;
    case 3:
        printf("你喜欢的颜色是黄色");
        break;
    case 4:
        printf("你喜欢的颜色是青色");
        break;
    case 5:
        printf("你喜欢的颜色是紫色");
        break;
    default:
        printf("没有这种颜色");
    }
    return 0;
}