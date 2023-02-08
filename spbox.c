#include<stdio.h>
int main()
{
	int i=1,j;
	do
	{	j=1;
		do
	{
		if(i==1 || j==1 || i==5 || j==5 )
		{
			printf("* ");
		}
		else
		{
			printf("  ");
		}
		j++;
	}	while(j<=5);		
	printf("\n");
	i++;
	}while(i<=5);
}