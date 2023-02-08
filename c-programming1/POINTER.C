#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n,a=0.5;
	clrscr();
	printf("Enter Number:");
	scanf("%f",&n);
	for(i=0.5;i<=n;i++)
	{
		printf("%.1f ",a);
		a=a+i;
	}
	getch();
}
