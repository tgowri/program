#include<stdio.h>
int main()
{
float principal,r;
int si,t;
scanf("%f%f%d",&principal,&r,&t);
si=(principal*r*t)/100;
printf("%d",si);
return 0;
}
