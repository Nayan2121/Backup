#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;           //1,2,4,8,16...
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		printf("%d  ",i);
	}
	getch();
}