#include<stdio.h>
int addition()
//void addition()
{
	int a,b;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	//printf(": %d",a+b);
	return a+b;
}
int main()
{
	printf("Welcome");
	int x = addition();
	//addition();
	printf("Addition of A and B: %d",x);
	printf("\nEnd");
}