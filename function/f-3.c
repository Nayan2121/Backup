#include<stdio.h>
float addition()
{
	float c,f=32,total;
	total = (c*9/5)+32;
	printf("\nEnter C: ");
	scanf("%f",&c);
	printf("\nF = 32");
	return (c*9/5)+32;
}
int main()
{
	printf("Welcome");
	float x = addition();
	printf("\nTotal: %.2f",x);
	printf("\n------------");
	printf("\nEnd");
}
