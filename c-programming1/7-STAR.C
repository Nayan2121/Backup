#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,sp=5;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		sp--;
		printf("\n");
	}
	for(a=1;a<=4;a++)
	{
		for(j=-1;j<=sp;j++)
			printf(" ");
		for(j=a;j<=4;j++)
		{
			printf("* ");
		}
		sp++;
		printf("\n");
	}
	getch();
}