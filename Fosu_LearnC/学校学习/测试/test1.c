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

// #include <stdio.h>
// #include <math.h>
// int sushu(int x)
// {
//     for (int i = 3; i <= sqrt(x); i += 2)
//     {
//         if (x % i == 0)
//             return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int n, tax;
//     scanf("%d", &n);
//     if (n == 2)
//         tax = 1; //2是素数
//     else if (n % 2 == 0)
//         tax = 2; //欧拉定理，大于2的偶数可以为两个素数之和
//     else if (sushu(n))
//         tax = 1;
//     else if (sushu(n - 2))
//         tax = 2;
//     else
//         tax = 3;
//     printf("%d", tax);
// }

// #include <stdio.h>
// int main()
// {
//     int k1, k2, k4, k6, k10;
//     int m, tol;
//     scanf("%d", &m);
//     k1 = 100000 * 0.1;
//     k2 = k1 + 100000 * (2 - 1) * 0.075;
//     k4 = k2 + 100000 * (4 - 2) * 0.05;
//     k6 = k4 + 100000 * (6 - 4) * 0.03;
//     k10 = k6 + 100000 * (10 - 6) * 0.015;
//     if (m <= 100000 && m >= 0)
//         tol = m * 0.1;
//     else if (m <= 200000 && m > 100000)
//         tol = (m - 100000) * 0.075 + k1;
//     else if (m <= 400000 && m > 200000)
//         tol = (m - 200000) * 0.05 + k2;
//     else if (m <= 600000 && m > 400000)
//         tol = (m - 400000) * 0.03 + k4;
//     else if (m <= 1000000 && m > 600000)
//         tol = (m - 600000) * 0.015 + k6;
//     else if (m > 1000000)
//         tol = (m - 1000000) * 0.01 + k10;
//     else
//         return 0;
//     printf("%d", tol);
// }
#include <stdio.h>
#include <stdlib.h>
struct Linknode
{
    int id;
    struct Linknode *next;
} * head;
int main()
{
    int n, sk;
    scanf("%d %d", &n, &sk);
    struct Linknode *p;
    head = p = (struct Linknode *)malloc(sizeof(struct Linknode));
    for (int i = 1; i <= n; i++)
    {
        p->id = i;
        if (i == n)
            p->next = head;
        else
            p->next = (struct Linknode *)malloc(sizeof(struct Linknode));
        p = p->next;
    }
    p = head;
    int cnt = 1;
    while (p->next != p)
    {
        p = p->next;
        cnt++;
        if (cnt == sk - 1)
        {
            p->next = p->next->next;
            p = p->next;
            cnt = 1;
        }
    }
    printf("%d", p->id);
}