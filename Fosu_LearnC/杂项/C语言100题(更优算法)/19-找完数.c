#include <stdio.h>
int main()
{
    int num, arr[1000], sum;
    int i, j, numL = 0;
    scanf("%d", &num);
    //ÕÒÄ³ÊıÍêÊı
    for (j = 1; j <= (num / 2); i++)
    {
        if (num % j == 0)
        {
            arr[numL] = j;
            numL++;
            sum += j;
        }
        if(sum == j){
            printf("%d=", j);
            for (i = 0;i<)
        }
    }
}