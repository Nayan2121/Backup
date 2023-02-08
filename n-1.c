#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Number:");
	scanf("%d",&n);
	i=n;
	do
	{
	printf("%d\t",i);
	i--;
	}while(i>=1);
}