#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	//printf("Enter Number:");
	//scanf("%d",&i);
	//for(i=i;i<=n;i++)
	for(i=-n;i<=n;i++)
	{
		printf("%d\n",i);
	}
	getch();
}