#include<stdio.h>
#include<conio.h>

void main()
{
	int maths, sci, eng,total;
	float per;
	clrscr();
	printf("Enter Maths Marks:");
	scanf("%d",&maths);
	printf("Enter Science Marks:");
	scanf("%d",&sci);
	printf("Enter English Marks:");
	scanf("%d",&eng);
	total = maths + sci + eng;
	per = (float)total/3;
	printf("Total Marks = %d",total);
	printf("\nper = %f",per);
	getch();
}