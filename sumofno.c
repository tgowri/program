#include<stdio.h>
int main()
{
int sum=0,n,num,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num);
sum=sum+num;
}
printf("%d",sum);
return 0;
}
