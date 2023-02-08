#include<stdio.h>
int main()
{
	int i=11,j;
	do
	{	j=1;
	do
	{
		printf("%d ",i++);
		j++;
	}while(j<=5);
		printf("\n");
		i+=5;
	}while(i<=55);
}