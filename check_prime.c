//check number wheater prime or not.s

#include <stdio.h>
#include <conio.h>

void main()
{
	int n,i,cnt;
   clrscr();

	printf("\n Enter the number: ");
	scanf("%d",&n);

         for(i=1;i<=n;i++)
         {
        		if(n%i==0)
         	cnt++;           //cnt==2 when no.is divided by 1 and itself
         }

         if(cnt==2)
         	printf("%d is prime",n);
         else
         	printf("%d is not prime",n);
	getch();
}

