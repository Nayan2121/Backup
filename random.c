#include<stdio.h>
#include<stdlib.h>
void main();
{
	int i,j,n;
	clrscr();
	printf("Enter Value:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			a=rand()%100+1;
			printf("%d",a++);
		}
	}
	printf("\n");
	getch();
}