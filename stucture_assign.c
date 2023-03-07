/*Create structure Elect Bill having
members consumer no, name, no_of_units,amt.

Write a program to accept 10 records.
Calculate amt - using following rate.

For no_of_units less than 100 - rate Rs. 1.50 per unit.
no_of_units greater than 100 - rate Rs. 6.50 per unit.
Display the records of largest and smallest amt. */

#include <stdio.h>
#include <conio.h>

struct elect_bill
{
	int c_no;
   int units,amt;
   char name[20];
}a[10];

void main()
{
	int i,max=0,min,n=2;
	clrscr();
  	for(i=1;i<=n;i++)
   {
		printf("\n\n\t\t\t\t\t::ENTER DATA FOR %d STUDENT::",i);
      printf("\nenter customer no: ");
      scanf("%d",&a[i].c_no);
      printf("\nenter customer name: ");
      scanf("%s",a[i].name);
      printf("\nenter number or units: ");
      scanf("%d",&a[i].units);
   }

   // calculations
   for(i=1;i<=n;i++)
   {
   	if(a[i].units<=100)
      	a[i].amt=a[i].units*1.50;
      else if(a[i].units>100)
      	a[i].amt=a[i].units*6.50;
   }


   //max_min
   for(i=1;i<=n;i++)
   {
      if (a[i].amt>max)
      	max=a[i].amt;

      if(a[i].amt<min)
      	min=a[i].amt;
   }

   //display
  	for(i=1;i<=n;i++)
   {
         printf("\n\t\t\t\tRECORD OF %d CUSTOMER::\n",i);
    		printf("\ncustomer no: ");
      	printf("%d",a[i].c_no);
      	printf("\ncustomer name: ");
      	printf("%s",a[i].name);
      	printf("\nnumber or units: ");
      	printf("%d",a[i].units);
         printf("\namount: ");
      	printf("%d",a[i].amt);
   }

   for(i=1;i<=n;i++)
   {
    	if(a[i].amt==max)
      {
         printf("\n\t\t::THE CUSTOMER HAVING MAXIMUM BILL::\n");
         printf("\ncustomer no: ");
      	printf("%d",a[i].c_no);
      	printf("\ncustomer name: ");
      	printf("%s",a[i].name);
      	printf("\nnumber or units: ");
      	printf("%d",a[i].units);
      }


   }

   for(i=1;i<=n;i++)
   {

       if(a[i].amt==min)
      {
       	printf("\n\t\tTHE CUSTOMER HAVING MINIMUM BILL::\n");
         printf("\ncustomer no: ");
      	printf("%d",a[i].c_no);
      	printf("\ncustomer name: ");
      	printf("%s",a[i].name);
      	printf("\nnumber or units: ");
      	printf("%d",a[i].units);
      }
   }
   getch();
}


