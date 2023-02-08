#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   printf("ceil: %.2f\n",ceil(4.6));
   printf("ceil: %.2f\n",ceil(14.1));

   printf("floor: %.2f\n",floor(4.6));
   printf("floor: %.2f\n",floor(14.1));

   printf("round: %.2f\n",round(4.6));
   printf("round: %.2f\n",round(14.1));

   printf("pow: %.2f\n",pow(2,5));

   printf("sqrt: %.2f\n",sqrt(16));
   
   printf("abs: %d\n",abs(-10));

   printf("Random: %d\n",rand()%50);
}