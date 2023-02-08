#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f=32,total;
	clrscr();
	printf("C:",c);
	scanf("%f",&c);
	total= (c*9/5) + 32;
	printf("F: %.2f",f);
	printf("\nTotal: %.2f",total);
	getch();
}