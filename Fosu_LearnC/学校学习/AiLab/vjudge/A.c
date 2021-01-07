#include <stdio.h>

// int main()
// {
//     int Li[104], vi[104], li[104], lr[104];
//     int i, j, ln, cnt[104];
//     scanf("%d", &ln);
//     for (i = 0; i < ln; i++)
//     {
//         scanf("%d", &Li[i]);
//         scanf("%d", &vi[i]);
//         scanf("%d", &li[i]);
//         scanf("%d", &lr[i]);
//     }
//     for (i = 0; i < ln; i++)
//     {
//         cnt[i] = 0;
//         for (j = 1; j < li[i]; j++)
//         {
//             if (j % vi[i] == 0)
//             {
//                 cnt[i]++;
//             }
//         }
//         for (j = lr[i] + 1; j <= Li[i]; j++)
//         {
//             if (j % vi[i] == 0)
//             {
//                 cnt[i]++;
//             }
//         }
//     }
//     for (i = 0; i < ln; i++)
//         printf("%d\n", cnt[i]);
//     return 0;
// }


int main()
{
    int Li, vi, li, lr;
    int i, fnl;
    scanf("%d", &i);
    while (i--)
    {
        fnl = 0;
        scanf("%d %d %d %d", &Li, &vi, &li, &lr);
        fnl = Li / vi + (li - 1) / vi - lr / vi;
        printf("%d\n", fnl);
    }
    return 0;
}