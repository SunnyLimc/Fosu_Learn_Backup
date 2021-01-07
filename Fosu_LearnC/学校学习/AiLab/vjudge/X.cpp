#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (n == 2)
    {
        printf("0");
        return 0;
    }
    sort(a, a + n);
    printf("%d", min((a[n - 2] - a[0]), (a[n - 1] - a[1])));
    return 0;
}

// int main()
// {
//     long int n, i, f = 0;
//     long int min, min1, max, max1;
//     int a[10000];
//     scanf("%ld", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%ld", &a[i]);
//         if (i == 0)
//             max = min = a[i];
//         if (a[i] >= max)
//             max = a[i];
//         if (a[i] <= min)
//             min = a[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         //initial
//         if (a[i] != max && a[i] != min && f == 0)
//         {
//             max1 = min1 = a[i];
//             f = 1;
//         }
//         //calculate
//         if (f == 1)
//         {
//             if (a[i] >= max1 && a[i] != max)
//                 max1 = a[i];
//             if (a[i] <= min1 && a[i] != min)
//                 min1 = a[i];
//         }
//     }
//     if (n == 2)
//         printf("0");
//     else if (max - max1 > min1 - min)
//         printf("%ld", max1 - min);
//     else
//         printf("%ld", max - min1);
// }