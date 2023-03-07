/*Function to calculate the sum of all the numbers stored in circular queue */
#include <stdio.h>
#include <conio.h>
#define MAX	5

void insert();
void sum();

int a[MAX];
int f=-1,r=-1,s=0,i;
char ans='n';

void main()
{
   insert();
   sum();
	getch();
}

void insert()
{
	do
   {
		if((f==0&&r==MAX-1)||r==f-1)
   		printf("overflow\n");
   	else if(f!=0 && r==MAX-1)
   		r=0;
      else
      {
      	f=0;
         r=r+1;
         printf("\nenter value of element at position %d: ",r);
         scanf("%d",&a[r]);
      }

	 printf("\n\t\t\t\t\t\tdo you want to insert more elements:");
    ans=getche();
	}while(ans=='y');
}

void sum()
{
	for(i=r;i>=f;i--)
   	s+=a[i];
   printf("\nsum=%d",s);
}
