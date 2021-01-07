#include <stdio.h>
int main()
{
    int num;
    char mark;
    scanf("%d", &num);
    mark = (num < 90) ? (num < 90 && num >= 80) ? 'B' : (num < 80 && num >= 70) ? 'C' : ((num < 70 && num >= 60) ? 'D' : 'E') : 'A';
    printf("%c", mark);
    return 0;
}