#include<stdio.h>
int addition(int x,int y)
{
	int per;
	per=(x+y)/2;
	return per;
}
int main()
{
	int a,b,x;
	printf("Enter A and B: ");
	scanf("%d%d",&a,&b);
	x=addition(a,b);
	printf("Per: %d",x);
}