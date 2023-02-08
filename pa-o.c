#include<stdio.h>
int main()
{
	int i=1,j,a='A';
	while(i<=5)
	{	j=1;
		while(j<=i)
	{
		printf("%c ",a++);
		j++;
	}		
	printf("\n");
	i++;
	}
}