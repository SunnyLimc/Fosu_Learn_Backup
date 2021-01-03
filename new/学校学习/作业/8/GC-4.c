#include <stdio.h>

#include <string.h>

int main(void)

{
    int i;
    char *a = "You are a student";
    char t[25];
    char *b = t;
    for (i = 0; *(a + i) != '\0'; i++)
        *(b + i) = *(a + i);
    printf("a=%s\nb=%s\n", a, b);

    return 0;
}