#include<stdio.h>
#include<conio.h>
void main()
{
	float rate,qty,amt,dis,billamt,gst,netbill;
	clrscr();
	printf("Enter Amount: ");
	scanf("%f",&rate);
	printf("Enter Qty: ");
	scanf("%f",&qty);
	amt= rate * qty;
       //	printf("Amt: %.2f",amt);
	dis = (amt*5)/100;
       //	printf("\nDis: %.2f",dis);
	billamt = amt - dis;
       //	printf("\nBillAmount: %.2f",billamt);
	gst = (billamt*18)/100;
       //	printf("\nGST: %.2f",gst);
	netbill = billamt +gst;
       //	printf("\nNetBill: %.2f",netbill);
       {
		printf("Rate\t Qty\t Amt\t  Dis\t BillAmt\t GST\t NetBill");
		printf("\n%.1f\t %.1f\t %.1f\t %.1f\t %.1f\t %.1f\t %.1f",rate,qty,amt,dis,billamt,gst,netbill);
       }
       getch();
}