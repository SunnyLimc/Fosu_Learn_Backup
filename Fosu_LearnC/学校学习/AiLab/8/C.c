#include <stdio.h>
int main()
{
int n, m, i, a;
scanf("%d %d", &n, &m);
for (i = 1; i <= n * m; i++)
{
scanf("%d", &a);
printf("%d ", a);
if (i % m == 0)
printf("\n");
}
return 0;
}