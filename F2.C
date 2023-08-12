#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,a;
	clrscr();
	printf("enter a X:");
	scanf("%d",&x);
	printf("enter a Y:");
	scanf("%d",&y);
	a=(x*x)-(2*x*y)+(y*y);
	printf("%d",a);
	getch();
}