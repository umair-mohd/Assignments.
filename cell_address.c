/*An integer array is defined as a x[250][400].
Find the address of cell x [90][30].
Given the base address 100.*/

#include <stdio.h>
#include <conio.h>

void main()
{
   int *x,a[250][400];
   clrscr();


   printf("cell adress = %d",&a[0][0]);

	getch();
}
