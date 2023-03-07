#include <stdio.h>
#include <conio.h>

void main()
{
	int a,i,j;
   clrscr();
   for(i=0;i<250;i++)
   {
   	for(j=0;j<400;j++)
  		{
      	while(i!=90)
         {
         	while(j!=30)
         	{
   				a+=i*j;
            }
         }
   	}
   }
   printf("address=%d",a);


 /* printf("Address Of a[250][400] : %x",&x[250][400]);
  printf("Address Of a[90][30] : %x",&x[90][30]);
  x[90][30]=100+2(400((90-1)+(30-1)));
  printf("Address Of a[90][30] After Base Address :%x",&a[90][30]); */
   getch();
}