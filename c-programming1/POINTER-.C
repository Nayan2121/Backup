#include<stdio.h>
#include<conio.h>
void main()
{
	float i;
	int n;
	clrscr();
	printf("Enter Number:");
	scanf("%d ",&n);
	for(i=0;i<=n;i++)
	{
		printf("%.1f ",i*0.5);
	}
	getch();
}