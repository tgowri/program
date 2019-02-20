#include<stdio.h>
void main()
{
int limit,i,number[100],sum=0,average;
scanf("%d",&limit);
for(i=0;i<limit;i++)
{
scanf("%d",&number[i];
}
for(i=0;i<limit;i++)
{
sum=sum+number[i];
}
average=sum/limit;
printf("%d",average);
return 0;
}
