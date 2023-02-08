#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter The Value of Divisible:  ");
	scanf("%d",&a);

	if(a%15==0)
	{
		printf("%d is Divisible By 5 and 3",a);
	}
	else{
		printf("%d is Not Divisible By 5 and 3",a);
	}
	getch();
}