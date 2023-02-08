#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();

	printf("Your Char =");
	scanf("%c",&a);
	if (a>=65 && a<=90)
		{
			a=a + 32;
			printf("Your Lwr Char: %c",a);
		}
	else if(a>=97 && a<=122)
		  {
			a=a - 32;
			printf("Your Upr Char: %c",a);
		  }
	getch();
}
