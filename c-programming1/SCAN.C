#include<stdio.h>
#include<conio.h>

void main()
{
	int maths,sci,total;
	clrscr();
	printf("Enter Maths Marks=");
	scanf("%d",&maths);
	printf("Enter Science Marks=");
	scanf("%d",&sci);
	total= maths + sci ;
	printf("\nMaths: %d",maths);
	printf("\nScience: %d",sci);
	printf("\nTotal Marks: %d",total);
	getch();
}