#include<stdio.h>
int main()
{
	int a[8];// = {10,20,30,40,50,60,70,80};
	int b[] = {1,2,3,4,5,6,7,8};
	int i,sum=0;
	//for(i=0;i<8;i++)
	//{
	//	printf("Enter a[%d]: ",i);
	//	scanf("%d",&a[i]);
	//}
	printf("\nA \tB \tTotal");
	for(i=0;i<8;i++)
	{
		sum=a[i]+b[i];
		//printf("\n A \tB \tTotal");
		printf("\n %d \t %d \t %d",i,a[i],i,b[i],sum);
	}
	
}