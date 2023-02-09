#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50], str2[50];
    int i,j;
    printf("Enter First Name: ");
    scanf("%[^\n]s",&str1);

    printf("Enter Second Name: ");
    scanf("%s",&str2);

    for(i=0;str1[i]!='\0';i++);

    for(j=0;str2[j]!='\0';i++,j++)
        {
            str1[i]=str2[j];
        }
    str1[i]='\0';

    printf("\nFinal Name: %s",str1);
}