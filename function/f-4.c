#include<stdio.h>
void addition()
{
	int a,b,c;
	printf("\nEnter Number: ");
	scanf("%d",&a);
	printf("\nEnter Number: ");
	scanf("%d",&b);
	printf("\nEnter Number: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest Number of A: %d",a);
		}
		else
		{
			printf("Largest Number of C: %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("Largest Number of B: %d",b);
		}
		else
		{
			printf("Largest Number of C: %d",c);
		}
	}
}
int main()
{
	printf("Welcome");
	addition();
	printf("\n------------");
	printf("\nEnd");
}
