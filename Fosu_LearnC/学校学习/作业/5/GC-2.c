#include <stdio.h>

int main(void)

{

    int count, grades;

    printf("请输入分数（输入负数结束）：\n");

    while (grades >= 0)
    {
        scanf("%d", &grades);
        if (grades >= 60)
            count++;
    }

    printf("Passing number：%d\n", count);

    return 0;
}