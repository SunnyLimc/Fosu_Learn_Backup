#include <stdio.h>
int main()
{
    int passwd = 123456, input, ir = 0;
    while (ir != 3)
    {
        scanf("%d", &input);
        if (input != passwd)
        {
            printf("Error\n");
            ir++;
        }
        if (input == passwd)
        {
            printf("True");
            return 0;
        }
    }
    return 0;
}