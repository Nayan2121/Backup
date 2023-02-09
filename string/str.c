#include<stdio.h>
#include<string.h>
void main()
{
    /*char str[50],temp;
    int i;
    printf("Enter Your String: ");
    scanf("%[^\n]s",&str);

    printf("The reverse of the original string is:");     
    for (i = 0; str[i]; i++);
    {  
       for(i = i-1; i>=0; i--)
       {
            printf ("%c",str[i]);
       } 
    }  */
   // printf (" The reverse of the original string is: %s ",  str);  
    char str[50],j[50];
    int i;
    printf("Enter Your String:");
    scanf("%s",&str);-
    for(i=0;str[i];i++)
    {
        for(i=0;i<=str[i];i++)
        {
            printf("Reverse String: %c",str[i]-1);
        }
    }
}