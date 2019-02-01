#include<stdio.h>
#include<conio.h>
void main()
{
int surface_area,volume,l,w,h;
clrscr();
scanf("%d%d%d",&l,&h,&w);
surface_area=(2*l*h)+(2*l*w)+(2*h*w);
volume=l*h*w;
printf("%d %d",surface_area,volume);
getch();
}
