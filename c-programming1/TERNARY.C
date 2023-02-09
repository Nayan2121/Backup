#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2000,b=3000,c=400;
	clrscr();
	//a>b>c ? printf("%d is large No.",a): printf("%d is large No.",b): printf("%d is large No.",c);
	//printf("%d is large No.",b>c?b:c);
	//printf("%d is large No.",c>a?c:a);

	printf("largest No. is: %d",a>b? a>c? c>b ?a:c: c:b);
	getch();
}
//rfthyfryh