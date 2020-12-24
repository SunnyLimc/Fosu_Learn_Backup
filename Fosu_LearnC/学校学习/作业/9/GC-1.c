#include <stdio.h>

struct stu /* 学生信息 */

{

    int no; /* 学号 */

    char name[10]; /* 姓名 */

    char sex[3]; /* 性别 */

    int age; /* 年龄 */

} stu;

int main(void)

{

    printf("请输入学号，姓名，性别，年龄\n");

    scanf("%d%s%s%d", &stu.no, stu.name, stu.sex, &stu.age);

    printf("学号:%d, 姓名:%s, 性别:%s, 年龄:%d\n", stu.no, stu.name, stu.sex, stu.age);
}