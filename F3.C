#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,a;
	clrscr();
	printf("enter value X:");
	scanf("%d",&x);
	printf("enter value Y:");
	scanf("%d",&y);
	a=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
	printf("%d",a);
	getch();
}
