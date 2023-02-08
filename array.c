#include<stdio.h>
int main()
{
	int a[5];
	int b[] = {1,2,3,4,5,6,7,8};
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<8;i++)
	{
		printf("\n b[%d]: %d",i,b[i]);
	}
}