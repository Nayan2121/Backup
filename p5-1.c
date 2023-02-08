#include<stdio.h>
int main()
{
	int i=5,j,a='A';
	while(i>=1)
	{	j=5;
		while(j>=i)
	{
		printf("%d ",i);
		j--;
	}		
	printf("\n");
	i--;
	}
}