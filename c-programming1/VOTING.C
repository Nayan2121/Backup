#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("Enter Age:");
	scanf("%d",&age);
	if (age>=18)
		printf("Eligible");
	else
		printf("Not Eligible");
	getch();
}