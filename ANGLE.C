#include<stdio.h>
#include<conio.h>
main()
{
int a1,a2;
int a3;
printf("Enter 2 angle of Triangle: ");
scanf("%d%d",&a1,&a2);
a3=180 -(a1+a2);
printf("The 3rd angle is %d",a3);
getch();
}
