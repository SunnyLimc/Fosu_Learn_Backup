#include <stdio.h>
int main()
{
    int num;
    char mark;
    scanf("%d", &num);
    mark = (num < 90) ? ((num < 90 && num >= 60) ? 'B' : 'C') : 'A';
    printf("%d belongs to %c", num, mark);
    return 0;
}