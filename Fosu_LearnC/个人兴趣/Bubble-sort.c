#include <stdio.h>

int main()
{
    int num[100], i, t, numL, numCor[100], total = 0, tmp;
    for (i = 1;; i++)
    {
        printf("Please input a number(2333333 to exit):");
        scanf("%d", &num[i]);
        if (num[i] == 2333333)
        {
            break;
        }
        numL = i;
    }
    i = 1;
    while (1)
    {
        //������δ�������������
        if (i == numL)
        {
            i = 1;
            total = 0;
        }
        //��ʼ����
        if (num[i] <= num[i + 1])
        {
            numCor[i] = 1;
        }
        else
        {
            numCor[i] = 0;
            tmp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = tmp;
        }
        //�ж��Ƿ��������
        total = total + numCor[i];
        if (total == (numL - 1))
        {
            break;
        }
        //����
        i++;
    }
    for (i = 1; i <= numL; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}