#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n,a[10][10],indeg[10],flag[10],count=0;
clrscr();
printf("enter the number of vertices:\n");
scanf("%d",&n);
printf("enter the adjacency matrix:\n");
for(i=0;i<n;i++)
{
printf("enter the row %d\n",i++);
for(j=0;j<n;j++);
scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
indeg[i]=0;
flag[i]=0;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
indeg[i]=indeg[i]+a[j][i];
printf("\n the topological order:");
while(count<n)
{
for(k=0;k<n;k++)
{
if(indeg[k]==0)&&(flag[k]==0))
{
printf("%d",k+1));
flag[k]=1;
}
for(i=0;i<n;i++)
{
if(a[i][k]==1)
indeg[k]--;
}
}
count++;
}
getch();
return 0;
}
