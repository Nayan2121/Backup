#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Number:");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
	printf("%d\t",i);
	i+=2;
	}
}