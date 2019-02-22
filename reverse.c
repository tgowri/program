#include<stdio.h>
int main()
{
int reverse=0,remainder,number;
scanf("%d",&number);
while(number!=0)
{
remainder=number%10;
reverse=reverse*10+remainder;
number=number/10;
}
printf("%d",reverse);
return 0;
}
