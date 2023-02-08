#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1,b=0,c;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{       c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	getch();
}
