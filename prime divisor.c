//Write a program which read number and print prime divisor or prime factor.

#include <stdio.h>
#include <conio.h>
#define  N	100

int x,i,j,cnt;

void list_prime();
void list_factor();

void main()
{
   clrscr();

	printf("\n Enter the number: ");
	scanf("%d",&x);
   list_prime();
   list_factor();

	getch();
}


void list_prime()
{
	for(i=1;i<=N;i++)
   {
   	cnt=0;
      for(j=1;j<=i;j++)
      {
      	if(i%j==0)
         	cnt++;           //cnt==2 for when no.is divided by 1 and itself
      }

      if(cnt==2 && x%i==0)
      	printf("prime divisors=%d\n",i);
   }
}

void list_factor()
{
	printf("\n\t\t\t\tFACTORS OF THE NUMBER::\n");
   for(i=x;i>1;i--)
   {
   	if(x%i==0)
   		printf("factors=%d\n",x/i);
   }
}
