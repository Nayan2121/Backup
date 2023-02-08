#include<stdio.h>
int main()
{
	int i=1,j;
	do
	{	j=1;
		do
	{
		if( i==j || i==5 || j==1 )
		{
			printf("* ");
		}
		else
		{
			printf("  ");
		}
		j++;
	}	while(j<=i);		
	printf("\n");
	i++;
	}while(i<=5);
}