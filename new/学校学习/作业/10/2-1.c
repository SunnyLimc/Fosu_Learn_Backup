#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("2-1.txt", "w+");
    int i, n;
    float tmp, a[12];
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &tmp);
        fwrite(fp, "%.2f ", tmp);
    }
    rewind(fp);
    for (i = 0; i < 10; i++)
        fscanf(fp, "%f", &a[i]);
    scanf("%d", &n);
    scanf("%f", &a[n - 1]);

    rewind(fp);
    for (i = 0; i < 10; i++)
    {
        fscanf(fp, "%f", &tmp);
        printf("%.2f ", tmp);
    }
    printf("\n");
    rewind(fp);
    for (i = 0; i < 10; i++)
        fprintf(fp, "%.2f ", a[i]);
    rewind(fp);
    for (i = 0; i < 10; i++)
    {
        fscanf(fp, "%f", &tmp);
        printf("%.2f ", tmp);
    }
}