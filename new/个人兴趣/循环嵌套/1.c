#include <stdio.h>
int main()
{
    int array[10];
    int hehe(int []);
    array[9] = 1;
    hehe(array);
    printf("%d", array[11]);
    return 0;
}
int hehe(int hehe[])
{
    hehe[11] = 1000;
    return 0;
}