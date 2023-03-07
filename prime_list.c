
#include <stdio.h>
#include <conio.h>

void main()
{
	int n,i,cnt,j;
   clrscr();

	printf("\n Enter the number: ");
	scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
   	cnt=0;
      for(j=1;j<=i;j++)
      {
      	if(i%j==0)
         cnt++;           //cnt==2 when no.is divided by 1 and itself
      }

      if(cnt==2)
      	printf("%d\n",i);
   }


	getch();
}

