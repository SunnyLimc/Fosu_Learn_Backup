#include <stdio.h>
int main()
{
int m,n,i,c=0,a[100];
scanf("%d %d",&m,&n);
for (i=0;i<2*m*n;i++)
{
scanf("%d",&a[i]);
if (i>=m*n)
if (a[i]==a[i-m*n])
c++;
}
if (c == m * n)
printf("Yes");
else
printf("No");
}