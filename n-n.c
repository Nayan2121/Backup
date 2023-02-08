#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Number:");
	scanf("%d",&n);
	i = -n;
	while(i<=n)
	{
	printf("%d\t",i);
	i++;
	}
}