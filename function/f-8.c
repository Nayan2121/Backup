#include<stdio.h>
int addition(int x,int y)
{
	printf("Addition is: %d",x+y);
}
int main()
{
	int a,b;
	printf("Enter A and B: ");
	scanf("%d%d",&a,&b);
	addition(a,b);
}