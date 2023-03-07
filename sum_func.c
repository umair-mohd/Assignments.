/*Write a program using function to print sum of digits of given number.*/

#include <stdio.h>
#include <conio.h>

int sum(int);

void main()
{
	int n;
   printf("\n:::ENTER NUMBER:::");
   scanf("%d",&n);

   printf("sum=%d",sum(n));

	getch();
}

int sum(int x)
{
	int s=0,rem;
   while (x!=0)
   {
		rem=x%10;
   	s=s+rem;
   	x/=10;
   }
   return s;
}
