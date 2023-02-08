#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;           //1,4,9,16,25...
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d  ",i*i);
	}
	getch();
}