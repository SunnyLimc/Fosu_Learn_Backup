#include <stdio.h>

void main()
{
    int i, j, k, l = 0;
    for (i = 0; i < 5; i++)
    {
        printf("����i\n%d\n\n", i);
        for (j = 0; j < 5; j++)
        {
            printf("����j\n%d\n\n", j);
            for (k = 0; k < 5; k++)
            {
                printf("����k\n%d\n\n", k);
                l = l + 1;
            }
        }
    }
    printf("һ������%d��\n", l);
}
// ��⣺�Ƚ���i��Ȼ�����j��һ�㣬Ȼ�����k����k����ȫ���㣻����j�ڶ��㣬��k����ȫ���㣻�Դ����ƣ���j���ꣻ
// ����i�ڶ����ظ���һ��ע�ͣ�ֱ����i���꣬������