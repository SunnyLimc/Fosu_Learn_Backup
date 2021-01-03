// 定义一个含有两个整数元素的一维数组a[2]，定义两个整型指针p1和p2分别指向a[0]和a[1]，输入两个整数给a[0]和a[1]，输出以下信息：

// 1）*p1和*p2；

// 2）输出p1和p2；

// 3）输出p2-p1。
#include <stdio.h>
int main()
{
    int a[2], *p1 = &a[0], *p2 = &a[1];
    scanf("%d %d", &a[0], &a[1]);
    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", p1, p2);
    printf("%d", p2 - p1);
}