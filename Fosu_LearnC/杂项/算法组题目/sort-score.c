//本作业目的是学习结构体

#include <stdio.h>
#include <string.h>
#define N 12

int i = 0, j = 0; //定义全局变量

struct student
{
    char name[10];
    int score;
} stu[N], tmp; //定义结构体

int defname()
{
    strcpy(stu[0].name, "小红");
    strcpy(stu[1].name, "小蓝");
    strcpy(stu[2].name, "小绿");
    strcpy(stu[3].name, "小白");
    strcpy(stu[4].name, "小黑");
    strcpy(stu[5].name, "小明");
    strcpy(stu[6].name, "小黄");
    strcpy(stu[7].name, "小紫");
    strcpy(stu[8].name, "小青");
    strcpy(stu[9].name, "小华");
} //结构体存姓名

int sort()
{
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
            if (stu[j].score < stu[j + 1].score)
            {
                tmp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = tmp;
            }
    }
} //排序

int getscore()
{
    for (i = 0; i < 10; i++)
    {
        printf("Please input %s's score:\n", stu[i].name);
        scanf("%d", &stu[i].score);
    }
}

int printname()
{
    system("cls");
    printf("The result is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s:%d ", stu[i].name, stu[i].score);
    }
}

int main()
{
    defname();
    getscore();
    sort();
    printname();
}