#include<stdio.h>
int main()
{
	int i='A',j,a=1;
	do
	{	j=1;
		do
	{
		printf("%c ",i);
		j++;
	}	while(j<=5);
	printf("\n");
	i++;
	}while(i<='E');
}