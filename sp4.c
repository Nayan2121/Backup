#include<stdio.h>
int main()
{
	int i=1,j,sp=15;
	while(i<=5)
	{	
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			if(i==j || i==5 || j==1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			j++;
		}
	sp--;		
	printf("\n");
	i++;
	}
}