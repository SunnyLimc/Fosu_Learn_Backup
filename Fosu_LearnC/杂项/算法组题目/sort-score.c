//����ҵĿ����ѧϰ�ṹ��

#include <stdio.h>
#include <string.h>
#define N 12

int i = 0, j = 0; //����ȫ�ֱ���

struct student
{
    char name[10];
    int score;
} stu[N], tmp; //����ṹ��

int defname()
{
    strcpy(stu[0].name, "С��");
    strcpy(stu[1].name, "С��");
    strcpy(stu[2].name, "С��");
    strcpy(stu[3].name, "С��");
    strcpy(stu[4].name, "С��");
    strcpy(stu[5].name, "С��");
    strcpy(stu[6].name, "С��");
    strcpy(stu[7].name, "С��");
    strcpy(stu[8].name, "С��");
    strcpy(stu[9].name, "С��");
} //�ṹ�������

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
} //����

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