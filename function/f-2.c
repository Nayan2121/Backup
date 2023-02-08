#include<stdio.h>
int addition()
{
	int dollar,rupees=80;
	rupees = dollar * 80;
	printf("\nDollar: ");
	scanf("%d",&dollar);
	
	return dollar * 80;
}
int main()
{
	printf("Welcome");
	int x = addition();
	printf("Rupees: %d",x);
	printf("\n------------");
	printf("\nEnd");
}