#include<stdio.h>
#include<conio.h>
void main()
{
	char lowerchar,uparchar;
	int ascii;
	clrscr();
	printf("Your Char =");
	scanf("%c",&lowerchar);
	//ascii = lowerchar;
	uparchar= lowerchar - 32;
	printf("Your Char is= %c",uparchar);
	getch();
}