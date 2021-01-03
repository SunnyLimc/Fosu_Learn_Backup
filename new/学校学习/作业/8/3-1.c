#include <stdio.h>
#include <string.h>
int main()
{
    char c1[20], c2[20], c3[20], i;
    char *p[3] = {c1, c2, c3};
    scanf("%s %s %s", c1, c2, c3);
    for (i = 0; i < 3; i++)
        printf("%s ", p[i]);
    printf("\n");
    void compare(char *[]);
    compare(p);
    for (i = 0; i < 3; i++)
        printf("%s ", p[i]);
}
void compare(char *p[3])
{
    int i, j;
    char min[20];
    for (i = 0; i < 3; i++)
    {
        strcpy(min, p[i]);
        for (j = i; j < 3; j++)
            if (strcmp(p[j], min) < 0)
            {
                strcpy(min, p[j]);
                strcpy(p[j], p[i]);
                strcpy(p[i], min);
            }
    }
}