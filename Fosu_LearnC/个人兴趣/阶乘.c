// #include <stdio.h>
// int main()
// {
//     int k, i, m, s, tol;
//     scanf("%d", &k);
//     for (m = 1, i = 1, s = 1, tol = 0; m <= i; m++)
//     {
//         s = s * m;
//         if (m == i)
//         {
//             tol += s;
//             i++;
//             if (i > k)
//                 break;
//             m = 1;
//             s = 1;
//         }
//     }
//     printf("%d", tol);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int k, t, i, j, sum = 0;
//     scanf("%d", &k);
//     for (i = 1; i <= k; i++)
//     {
//         for (j = 1, t = 1; j <= i; j++)
//         {
//             t *= j;
//         }
//         sum += t;
//     }
//     printf("%d", sum);
// }