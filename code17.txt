#include <stdio.h>
 
#include <conio.h>
 
void main()
 
{       
 
	struct date
 
	{
 
		int day;
 
		int month;
 
		int year;
 
	};
 
	struct details
 
	{
 
		char name[20];    /* using struct we store the details of each product  */
 
		int price;
 
		int code;
 
		int qty;
 
		struct date mfg;
 
	};
 
	struct details item[50];     /*  initialize the struct with fifty   */
 
	int n,i;
 
	clrscr();
 
	printf("Enter number of items:");    /* add the number of products by user */
 
	scanf("%d",&n);
 
	fflush(stdin);
 
	for(i=0;i<n;i++)
 
	{
		fflush(stdin);
 
		printf("Item name:");
 
		scanf("%[^\n]",item[i].name);       /* adding the details for each product using a for loop by user */
 
		fflush(stdin);
 
		printf("Item code:");
 
		scanf("%d",&item[i].code);
 
		fflush(stdin);
 
		printf("Quantity:");
 
		scanf("%d",&item[i].qty);
 
		fflush(stdin);
 
		printf("price:");
 
		scanf("%d",&item[i].price);
 
		fflush(stdin);
 
		printf("Manufacturing date(dd-mm-yyyy):");
 
		scanf("%d-%d-
%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);
 
	}
 
	printf("             *****  INVENTORY *****\n");
 
	printf("------------------------------------------------------------------\n");
 
	printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE  |MFG.DATE\n");
 
	printf("------------------------------------------------------------------\n");
 
	for(i=0;i<n;i++)
 
		printf("%d     %-15s        %-d          %-5d     %-5d     %d/%d/%d\n",i+1,item[i].name,item[i].code,item[i].qty,item[i].price,
			      item[i].mfg.day,item[i].mfg.month,item[i].mfg.year);      /* displaying the output in the table format */
 
	printf("------------------------------------------------------------------\n");
 
	getch();
 
}
