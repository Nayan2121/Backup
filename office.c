#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,a,b;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			a = rand()%99 + 1 ;
			printf("%d ",a);
			if(b<a)
			b = a;
		}
		printf("\n");
	}printf("\nmax: %d",b);
}