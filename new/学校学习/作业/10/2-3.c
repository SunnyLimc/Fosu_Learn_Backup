#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char tmp[20], ch[15][20];
    char(*str)[20];
    str = ch;
    FILE *fp;
    fp = fopen("2-3.test", "w+");
    strcpy(tmp, "one");
    fputs("One\n", fp);
    fputs("Two\n", fp);
    fputs("Three\n", fp);
    fputs("Four\n", fp);
    fputs("Five\n", fp);
    fputs("Six\n", fp);
    fputs("Seven\n", fp);
    fputs("Eight\n", fp);
    fputs("Nine\n", fp);
    fputs("Ten", fp);
    rewind(fp);
    for (i = 0; i < 10; i++)
        fscanf(fp, "%s", *(str + i));
    for (i = 0; i < 10; i++)
        printf("%s\n", *(str + i));
}
