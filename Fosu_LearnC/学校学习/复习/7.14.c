//输入十个学生门课的成绩
//计算每个学生平均分
//计算每门课平均分
//找出50个分数中最高的分数所对应的学生和课程
//计算平均分方差
//文件写入和读取
//fflush
#include <stdio.h>
#include <stdlib.h>
void input()
{
    FILE *fp;
    // fp = fopen("7.14.c.txt", "r");
    // if (fp == NULL)
    // {
    // fclose(fp);
    fp = fopen("7.14.c.txt", "w+");
    // }
    // else
    // {
    //     fclose(fp);
    //     fp = fopen("7.14.c.txt", "a+");
    // }
    // pirntf("Pls input cnt of stu");
    // int cnt;
    // scanf("%d", cnt);
    char name[20], s[20];
    int score;
    for (int i = 0; i < 10; i++)
    {
        printf("Pls input name %d\n", i);
        scanf("%s", name);
        fprintf(fp, "%s ", name);
        for (int j = 0; j < 5; j++)
        {
            printf("Pls input %s's score %d\n", name, j + 1);
            scanf("%d", &score);
            fprintf(fp, "%d ", score);
        }
        fprintf(fp, "\n");
        fflush(fp);
    }
}
void stream()
{
    int score[10][5];
    char name[10][20];
    //stream
    {
        FILE *fp;
        fp = fopen("7.14.c.txt", "r");
        for (int i = 0; i < 10; i++)
        {
            fscanf(fp, "%[^ ]", name[i]);
            fseek(fp, 1, 1);
            printf("%s ", name[i]);
            for (int j = 0; j < 5; j++)
            {
                char scoreC[5];
                fscanf(fp, "%[^ ]", scoreC);
                fseek(fp, 1, 1);
                score[i][j] = atoi(scoreC);
                printf("%d ", score[i][j]);
            };
            fseek(fp, 1, 1);
            printf("\n");
        }
    }
    //calculate
    int sumStu[10] = {0}, sumClass[5] = {0}, maxClass, maxStu, maxScore;
    double averStu[10], averClass[5], averSum = 0, averSumF = 0, averFX;
    //计算学生平均分
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
            sumStu[i] += score[i][j];
        averStu[i] = (double)sumStu[i] / 5;
    }
    //计算班级平均分
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
            sumClass[i] += score[j][i];
        averClass[i] = (double)sumClass[i] / 10;
    }
    //计算最高分学生和班级
    maxScore = score[0][0];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 5; j++)
            if (score[i][j] >= maxScore)
            {
                maxScore = score[i][j];
                maxStu = i;
                maxClass = j;
            }
    //计算平均分方差
    for (int i = 0; i < 10; i++)
    {
        averSum += averStu[i];
        averSumF += averStu[i] * averStu[i];
    }
    averFX = ((double)averSumF / 10) - ((averSum / 10) * (averSum / 10));
    //输出
    printf("\n学生平均分：\n");
    for (int i = 0; i < 10; i++)
        printf("第%d个学生：%.2lf\n", i + 1, averStu[i]);
    printf("\n班级平均分：\n");
    for (int i = 0; i < 5; i++)
        printf("第%d个班级：%.2lf\n", i + 1, averClass[i]);
    printf("\n最高分：\n");
    printf("第%d个学生\n第%d个班级\n为%d分\n", maxStu + 1, maxClass + 1, maxScore);
    printf("\n学生平均分方差：%.2lf\n", averFX);
}
int main()
{
    // input();
    stream();
}