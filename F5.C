#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,a;
	clrscr();
	printf("enter value X:");
	scanf("%d",&x);
	printf("enter value Y:");
	scanf("%d",&y);
	printf("enter value Z:");
	scanf("%d",&z);
	a=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
	printf("%d",a);
	getch();
}