#include <stdio.h>

int main(void)

{

    int i, n = 5;

    float f[5];

    printf("������5��ʵ����");

    for (i = 0; i < 5; i++)

        scanf("%f", &f[i]);

    printf("��5����Ϊ��");

    for (i = 0; i < 5; i++)

        printf("%6.1f", f[i]);

    printf("\n");

    return 0;
}