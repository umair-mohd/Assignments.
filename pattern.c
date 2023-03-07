/* print pattern

A1,
B2,C3,
D4,E5,F6,
G7,H8,I9,J10,
*/

#include <stdio.h>
#include <conio.h>

void pattern(int, int);

void main()
{
	int a=65,b=1;
	clrscr();
	pattern(a,b);
	getch();
}

void pattern(int ch,int n)
{
	int i,j;
	for(i=0;i<5;i++)
   {
   	for(j=0;j<i;j++)
      {
      	printf("%c%d,",ch++,n++);
      }
   printf("\n");
   }
}
