#include<stdio.h>
int main()
{
int n,m,i,j,t=0,a,x,y;
scanf("%d %d",&n,&m);
for (i=0;i<n;i++)
for (j=0;j<m;j++)
{
scanf("%d",&a);
if (a>t)
{
t=a;
x=i;
y=j;
}
}
printf("%d %d",x+1,y+1);
}