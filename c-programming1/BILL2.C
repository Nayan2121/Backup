#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,a,b,c,d;
	clrscr();
	printf("Enter Using Units:");
	scanf("%f",&unit);
	a=(unit*0.60);
	b=(60+50+(unit-100)*0.80);
	c=(60+160+50+(unit-300)*0.90);
	d=c+(c*15/100);
	if (unit<=100)
		printf("Total: %.2f",a);
	else if (unit>100 && unit<=300)
		printf("Total: %.2f",b);
	else if (unit>300)
		printf("Total: %.2f",c);
	if (c>=300)
		printf("\nWith Interest: %.2f",d);
	getch();
}