#include <stdio.h>
int main()
{
    float a1, a2, b1, b2;
    scanf("%f,%f", &a1, &a2);
    scanf("%f,%f", &b1, &b2);
    printf("%-.1f+%-.1f*i", a1 - b1, a2 - b2);
}