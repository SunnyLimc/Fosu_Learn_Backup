#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char c[n][20], i;
    char *p[n];
    for (i = 0; i < n; i++)
    {
        gets(c[i]);
        p[i] = c[i];
    }
    void sort(int n, char *[]);
    sort(n, p);
    printf("Now,the sequence is:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", p[i]);
}
void sort(int n, char *p[])
{
    int i, j;
    char min[25];
    for (i = 0; i < n; i++)
    {
        strcpy(min, p[i]);
        for (j = i; j < n; j++)
            if (strcmp(p[j], min) < 0)
            {
                strcpy(min, p[j]);
                strcpy(p[j], p[i]);
                strcpy(p[i], min);
            }
    }
}