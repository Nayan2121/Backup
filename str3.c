#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50];
    int i,j=0,k=0;
    printf("Enter the Name: ");
    scanf("%[^\n]s",&str1);

    for(i=0;str1[i]!='\0';i++);
	i=j;
    for(j=0;j<=i;j++)
	{
        if(j=0 || j=5)
        {
            printf("%s %s",str1);
        }
        else if(j=1 || j=4)
		{
			printf("\n%s %s",str1);
		}
		else if(j=2 || j=3)
		{
			printf("\n%s %s",str1);
		}
		else
		{
			printf("\n");
		}	
	}
	//printf("Original Name: %c",str1);
    
}