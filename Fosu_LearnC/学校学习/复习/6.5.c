//逆序排放数组
#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 5 / 2; i++)
    {
        swap(&a[i], &a[4 - i]);
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}