#include<stdio.h>
int main()
{
	int i=11,j=1;
	do
	{
		{
			printf("%d ",i++);
			j++;
		}
		{
			printf("\n");
			i+=5;
		}while(j<=5);
	}while(i<=55);
}