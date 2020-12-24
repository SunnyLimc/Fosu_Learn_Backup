// #include <stdio.h>
// int count(int n)
// {
//     int total;
//     if (n == 1)
//         total = 1;
//     else
//     {
//         total = (count(n - 1) + 1) * 2;
//     }
//     return total;
// }
// int count1(float n, float x)
// {
//     if (n == 0)
//         return 1;
//     else if (n == 1)
//         return x;
//     else
//         return ((2 * n - 1) * x - count1(n - 1, x) - (n - 1) * count1(n - 2, x)) / n;
// }
// int main()
// {
//     float input1, input2;
//     float r;
//     scanf("%f %f", &input1, &input2);
//     r = count1(input1, input2);
//     printf("%f", r);
// }
// #include <stdio.h>
// char *(*function)(char *string, char *substring);

// void input(char *string, char *substring)
// {
//     printf(" 请输入字符串:");
//     gets(string);
//     printf(" 请输入要搜索的字符串:");
//     gets(substring);
// }
// int stringlen(char *string)
// {
//     int i = 0;
//     while (string[i] != '\0')
//         i++;
//     return i;
// }
// char *search_string(char *string, char *search_string)
// {
//     int i, j, k;
//     k = stringlen(string) - stringlen(search_string);
//     if (k > 0 && NULL != string && NULL != search_string)
//     {
//         for (i = 0; i <= k; i++)
//             for (j = i; string[j] == search_string[j - i]; j++)
//                 if (search_string[j - i + 1] == '\0')
//                     return string + i + stringlen(search_string);
//     }
//     return NULL;
// }

// void print(char *ret_string)
// {
//     if (ret_string != NULL)
//         printf(" 所搜索字符串之后的字符为:%s\n", ret_string);
//     else
//         printf(" 没有找到所要搜索的字符串\n");
// }
// void main()
// {
//     char stringA[50], stringB[50];
//     char search_stringA[50], search_stringB[50];
//     char *ret_stringA, *ret_stringB;
//     input(stringA, search_stringA);
//     ret_stringA = search_string(stringA, search_stringA);
//     printf(" 直接调用函数search_string()\n");
//     print(ret_stringA);
//     input(stringB, search_stringB);
//     function = search_string;
//     ret_stringB = function(stringB, search_stringB);
//     printf(" 使用函数指针function 调用函数search_string()\n");
//     print(ret_stringB);
//     return;
// }
// #include <stdio.h>
// #define STR "Hello World!"
// void main()
// {
//     char *STR = "This is a string!!!";
//     printf(" 字符串中的宏%s\n", "STR!");
//     printf(" 字符串中的宏 STR 和不在字符串中的宏: %s\n", STR);
//     printf(" 出现在字符串变量名中的宏: %s\n", STR);
//     return;
// }
// #include <stdio.h>
// int main()
// {
//     int a[10], tmp, i, *max, *min;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//         if (i == 0)
//             max = min = a;
//         else if (a[i] > *max)
//             max = &a[i];
//         else if (a[i] < *min)
//             min = &a[i];
//     }
//     tmp = *min;
//     *min = *max;
//     *max = tmp;
//     for (i = 0; i < 5; i++)
//         printf("%d ", a[i]);
// }
// #include <stdio.h>
// int main()
// {
//     int a[3][3], i, j, n;
//     scanf("%d", &n);
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//             if (j >= i)
//                 a[i][j] += n;
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n, i, num = 1, tmp = 1;
//     double s;
//     scanf("%d", &n);
//     for (i = 0; i < 2 * n; i++)
//     {
//         s += tmp * (1 / (float)num);
//         num = num + 1;
//         tmp = -tmp;
//     }
//     printf("%lf", s);
// }

#include <stdio.h>
int main()
{
    int arr[2010];
    printf("%d\n", arr[2]);
    printf("%d\n", arr[4]);
    printf("%d\n", arr[2000]);
}