#include <stdio.h>
int main()
{
    int num1, num2, ans;
    scanf("%d %d", &num1, &num2);
    scanf("%d", &ans);
    if (num1 + num2 == ans)
    {
        printf("right");
    }
    else
    {
        printf("error");
    }
    return 0;
}