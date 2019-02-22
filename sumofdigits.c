#include<stdio.h>
int main()
{
int number,sum=0,remainder;
scanf("%d",&number);
while(number!=0)
{
remainder=number%10;
sum=sum+remainder;
number=number/10;
}
printf("%d",sum);
return 0;
}
