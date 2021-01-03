#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char tmp;
    fp1 = fopen("2-2.1.txt", "r");
    fp2 = fopen("2-2.2.txt", "r");
    while (!feof(fp1))
    {
        tmp = fgetc(fp1);
        putchar(tmp);
    }
    fclose(fp1);
    printf("\n");
    while (!feof(fp2))
    {
        tmp = fgetc(fp2);
        putchar(tmp);
    }
    fclose(fp2);
}