#include <stdio.h>
int main()
{
    int swi;
    scanf("%d", &swi);
    switch (swi)
    {
    case 0:
        printf("��ϲ������ɫ�Ǻ�ɫ");
        break;
    case 1:
        printf("��ϲ������ɫ�ǳ�ɫ");
        break;
    case 2:
        printf("��ϲ������ɫ����ɫ");
        break;
    case 3:
        printf("��ϲ������ɫ�ǻ�ɫ");
        break;
    case 4:
        printf("��ϲ������ɫ����ɫ");
        break;
    case 5:
        printf("��ϲ������ɫ����ɫ");
        break;
    default:
        printf("û��������ɫ");
    }
    return 0;
}