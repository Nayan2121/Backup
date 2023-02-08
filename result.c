#include<stdio.h>
int main()
{	
	int name[5];
	int m[5],s[5],e[5];
	int i,t=0;
	float p;
	for(i=0;i<5;i++)
	{
		printf("Name:");
		scanf("%d",&name[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("Maths:");
		scanf("%d",&m[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("Science:");
		scanf("%d",&s[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("Hindi:");
		scanf("%d",&e[i]);	
	}
	printf("\nName\tMaths  Science  Hindi  Totat   Per  Grade");
	for(i=0;i<5;i++)
	{
		t=m[i]+s[i]+e[i];
		p=t/3;
		if(p>=75)
		{
			pritnf("A+",p);
		}
		printf("\n%d\t%d\t%d\t%d\t%d\t%.1f",name[i],m[i],s[i],e[i],t,p);
	}
}