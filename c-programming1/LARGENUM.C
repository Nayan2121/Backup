#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter Number:");
	scanf("%d %d %d",&a,&b,&c);

	if (a>b)
	{
		if(a>c)
		{
		printf("Largest Number Is: %d",a);
		}
		else	{
		printf("Largest Number Is: %d",c);
		}
	}
	else
	{
	       if(b>c)
	       {
			printf("Largest Number Is: %d",b);
	       }
	       else     {
			printf("Largest Number Is: %d",c);
		}
	}
	getch();
}