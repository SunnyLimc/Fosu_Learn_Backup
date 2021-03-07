#include <iostream>
using namespace std;
int main()
{
    for (int a = 1; a < 50; a++)
        for (int b = 1; b < 50; b++)
            for (int c = 1; c < 50; c++)
            {
                if (3 * a + 7 * b + c == 315 && 4 * a + 10 * b + c == 420)
                {
                    printf("    %d %d %d    ", a, b, c);
                    printf("\n    %d    ", a + b + c);
                    system("pause");
                }
            }

    system("pause");
    return 0;
}