#include <stdio.h>

void main()
{
    int i, j, k, l = 0;
    for (i = 0; i < 5; i++)
    {
        printf("这是i\n%d\n\n", i);
        for (j = 0; j < 5; j++)
        {
            printf("这是j\n%d\n\n", j);
            for (k = 0; k < 5; k++)
            {
                printf("这是k\n%d\n\n", k);
                l = l + 1;
            }
        }
    }
    printf("一共跑了%d行\n", l);
}
// 理解：先进入i，然后进入j第一层，然后进入k，把k跑完全部层；进入j第二层，把k跑完全部层；以此类推，把j跑完；
// 进入i第二层重复上一行注释，直至把i跑完，结束。