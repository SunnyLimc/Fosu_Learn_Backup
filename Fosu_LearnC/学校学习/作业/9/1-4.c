#include <stdio.h>
struct Stu
{
    char name[20], no[20];
    float score1, score2, score3, aver;
};
int main()
{
    int n, i;
    typedef struct Stu stu;
    scanf("%d", &n);
    stu s[10];
    float avers = 0, sum;
    int max, maxid;
    for (i = 0; i < n; i++)
    {
        scanf("%s%s%f%f%f", s[i].no, s[i].name, &s[i].score1, &s[i].score2, &s[i].score3);
        sum = s[i].score1 + s[i].score2 + s[i].score3;
        s[i].aver = sum / 3;
        avers += s[i].aver;
        if (i == 0)
        {
            max = sum;
            maxid = 0;
        }
        else if (sum > max)
            maxid = i;
    }
    avers = avers / n;
    printf("%10s%10s%9s%9s%9s%8s\n", "No.", "name", "score[1]", "score[2]", "score[3]", "average");
    for (i = 0; i < n; i++)
        printf("%10s%10s%9.2f%9.2f%9.2f%8.2f\n", s[i].no, s[i].name, s[i].score1, s[i].score2, s[i].score3, s[i].aver);
    printf("average=%6.2f\n", avers);
    printf("The highest score is:%10s%10s\n", s[maxid].no, s[maxid].name);
    printf("His scores are:%6.2f%6.2f%6.2f,average:%6.2f\n", s[maxid].score1, s[maxid].score2, s[maxid].score3, s[maxid].aver);
}