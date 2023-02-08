#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter Year:");
	scanf("%d",&a);

	if(a%4==0)
		{
			printf("Leap Year",a);
		}
	else
		{
			printf("Normal Year",a);
		}
	getch();
}