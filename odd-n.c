#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter Number:");
	scanf("%d",&n);
	do
	{
	printf("%d\t",i);
	i+=2;
	}while(i<=n);
}