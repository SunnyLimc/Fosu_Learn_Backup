#include <stdio.h>

int main()
{
    int num[100], i, n, numL, numCor[100], total = 0, tmp;
    char ch;
    scanf("%d", &n);
    printf("Please input %d number(s):\n", n);
    for (i = 1;; i++)
    {
        scanf("%d", &num[i]);
        numL = i;
        if (i == n)
            break;
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
    printf("max=%d min=%d", num[numL], num[1]);
    return 0;
}