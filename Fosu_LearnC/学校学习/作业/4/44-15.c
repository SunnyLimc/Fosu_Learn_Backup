#include <stdio.h>
int main()
{
    int your, frd;
    scanf("%d", &your);
    scanf("%d", &frd);
    if (your >= frd)
    {
        printf("You are older!");
    }
    else
    {
        printf("Your friend is older!");
    }
    return 0;
}