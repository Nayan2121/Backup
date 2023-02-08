#include<stdio.h>
int addition()
{
	int age,a,b;
	printf("\nEnter Age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You can Vote");
	}
	else
	{
		printf("You can't Vote");
	}
}
int main()
{
	printf("Welcome");
	addition();
	printf("\n------------");
	printf("\nEnd");
}