#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter Marks: ");
	scanf("%d",&a);

	if (a>100)
	{
		printf("Pass",a);
	}
	else	{
		printf("Fail",a);
	}
	getch();
}
