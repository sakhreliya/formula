#include<stdio.h>
#include<conio.h>2
main()
{
	int x,y,a;
	clrscr();
	printf("enter value X:");
	scanf("%d",&x);
	printf("enter value Y:");
	scanf("%d",&y);
	a=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
	printf("%d",a);
	getch();
}

