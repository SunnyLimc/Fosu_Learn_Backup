#include <stdio.h>

int main()
{
    int num[100], i = 1, t, numL, numCor[100], total = 0, tmp;
    scanf("%d %d %d", &num[1], &num[2], &num[3]);
    numL = 3;
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
    printf("%d", num[2]);
    return 0;
}