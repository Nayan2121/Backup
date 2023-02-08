#include<stdio.h>
int main()
{
	int i=65,j,a='A';
	while(i<=69)
	{	j=65;
		while(j<=i)
	{
		printf("%c ",j);
		j++;
	}		
	printf("\n");
	i++;
	}
}