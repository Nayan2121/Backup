#include<stdio.h>
int addition()
{
	int a,maths=50;
	a = maths + 20;
	printf("\nMaths: %d",maths);
	
	return maths + 20;
}
int main()
{
	printf("Welcome");
	int x = addition();
	printf("\nValue Of A: %d",x);
	printf("\nEnd");
}