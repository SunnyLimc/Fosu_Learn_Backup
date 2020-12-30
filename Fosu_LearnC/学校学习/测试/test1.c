#include <stdio.h>
// void main()
// {
//     int n[2], i, j, k;
//     for (i = 0; i < 2; i++)
//         n[i] = 0;
//     k = 2;
//     printf("\n\n");
//     for (i = 0; i < k; i++)
//         for (j = 0; j < k; j++)
//         {
//             n[j] = n[i] + 1;
//             printf("n[%d] = n[%d] + 1\n", j, i);
//             printf("n[%d]=%d\n\n", j, n[j]);
//         }
//     printf("%d\n", n[1]);
// }
// int main()
// {
//     int a[10], i, j, tmp;
//     for (i = 0; i < 10; i++)
//     {
//         a[i] = i;
//     }
//     for (i = 0; i < 10 - 1; i++)
//         for (j = 0; j < 10 - i - 1; j++)
//             if (a[j] < a[j + 1])
//             {
//                 tmp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = tmp;
//             }
//     for (i = 0; i < 10; i++)
//         printf("%d ", a[i]);
// }
// int main()
// {
//     int a[10], i, j, max;
//     for (i = 0; i < 10; i++)
//     {
//         a[i] = i;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         max = a[i];
//         for (j = i; j < 10; j++)
//             if (a[j] > max)
//             {
//                 max = a[j];
//                 a[j] = a[i];
//                 a[i] = max;
//             }
//     }
//     for (i = 0; i < 10; i++)
//         printf("%d ", a[i]);
// }
#include <stdio.h>
int main()
{
    int i, n, sum = 0, tmp;
    scanf("%d%d", &i, &n);
    tmp = i;
    while (n--)
    {
        sum += i;
        i = i * 10 + tmp;
    }
    printf("%d", sum);
}