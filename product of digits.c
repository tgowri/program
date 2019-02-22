#include<stdio.h>
int main()
{
int product=1,number,remainder;
scanf("%d",&number);
while(number!=0)
{
remainder=number%10;
product=product*remainder;
number=number/10;
}
printf("%d",product);
return 0;
}
