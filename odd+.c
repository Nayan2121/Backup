#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("%d ",i);
	i+=2;
	sum=sum+i;
	}	
	printf("\nTotal: %d",sum);
}