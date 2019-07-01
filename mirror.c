#include<stdio.h>
int main()
{
int limit,num[10],d,new[10],numi[10],che[10];
scanf("%d",&limit);
for(int i=0;i<limit;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<limit;i++)
{
scanf("%d",&che[i]);
}
for(int i=limit-1,d=0;i>=0;i--,d++)
{
new[d]=num[i];
}
for(int i=0;i<limit;i++)
{
numi[i]=new[i];
}
for(int i=0;i<limit;i++)
{
if(che[i]==numi[i])
{
}
}
printf("yes");
for(int i=0;i<limit;i++)
{
if(che[i]!=numi[i])
{
}
}
printf("no");

return 0;
}
