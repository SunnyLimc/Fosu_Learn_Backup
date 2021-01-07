#include <stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a == 200)
            printf("OK\n");
        if (a == 202)
            printf("Accepted\n");
        if (a == 400)
            printf("Bad Request\n");
        if (a == 403)
            printf("Forbidden\n");
        if (a == 404)
            printf("Not Found\n");
        if (a == 500)
            printf("Internal Server Error\n");
        if (a == 502)
            printf("Bad Gateway\n");
    }
}
