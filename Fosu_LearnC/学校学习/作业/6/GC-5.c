#include <stdio.h>

int main(void)

{

    int i;

    char str[6] = "apple";

    printf("���ַ���Ϊ��");

    for (i = 0; str[i] != '\0'; i++)

        putchar(str[i]);

    printf("\n");

    return 0;
}
