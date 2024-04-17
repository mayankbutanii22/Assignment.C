#include<stdio.h>
#include<conio.h>
main()
{
int bs,hra,da,ta;
int gs;
clrscr();
printf("Enter a bs,hra,da,ta value:");
scanf("%d%d%d%d",&bs,&hra,&da,&ta);
gs=bs+hra+da+ta;
printf("is the gs: %d",gs);
getch();
}
