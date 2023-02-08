#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,a;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i+=2)
	{
		printf("%d  ",i);
		sum = sum + i;
	}
	printf("\nTotal: %d",sum);
	getch();
}