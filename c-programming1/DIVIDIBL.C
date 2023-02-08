#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter The Value of Divisible:  ");
	scanf("%d",&a);

	if(a%5==0)
	{
		printf("%d is Divisible By 5",a);
	}
	else{
		printf("%d is Not Divisible By 5",a);
	}
	getch();
}
