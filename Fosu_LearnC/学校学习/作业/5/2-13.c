#include <stdio.h>
int main()
{
    int num[100], i, j, numL, numCor[100], total = 0, tmp; //�����Դ�����
    int n, sum = 0;
    scanf("%d", &n);

    //��������
    i = 0;
    do
    {
        scanf("%d", &num[i]);
        numL = i;
        i++;
    } while (getchar() != '\n');
    //����
    for (int i = 0; i < numL; i++)
    {
        total = 0;
        for (j = 0; j < numL - i; j++)
        {
            if (num[j] <= num[j + 1])
            {
                numCor[j] = 1;
            }
            else
            {
                numCor[j] = 0;
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
            total += numCor[j];
        }
    }
    //���
    for (i = 0; i <= numL; i++)
    {
        sum += num[i];
    }
    //���
    printf("%d %d %d", num[numL], num[0], sum / (numL + 1));
    return 0;
}
