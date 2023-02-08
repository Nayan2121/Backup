#include<stdio.h>
#include<conio.h>
void main()
{
	int value;
	clrscr();
	printf("Enter The Value:");
	scanf("%d",&value);
	if (value>0)
	{
		printf("Positive",value);
	}
	else
	{
		printf("Negative",value);
	}
	getch();
}