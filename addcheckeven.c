#include<stdio.h>
int main()
{
int num1,num2,result;
scanf("%d%d",&num1,&num2);
result=num1+num2;
if((result%2)==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
