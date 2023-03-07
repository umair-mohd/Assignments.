#include <stdio.h>
#include <conio.h>
#define MAX 5

char ans='n';

void insert();
void  del();

int f=-1,r=-1,a[MAX];

void main()
{
	insert();
   del();
	getch();
}


void insert()
{
	f=0;
	do
   {
		if(r == MAX-1)
         printf("\n\t\t\t\t::QUEUE IS FULL::");

      else
      	{
         printf("\nenter the element in QUEUE::");
    		scanf("%d",&a[++r]);
         }

   	printf("\n\t\t\t\tdo you want to insert more elements in queue::");
   	ans=getche();

    }while (ans=='y');
}


void del()
{
	do
   {
 		if(f>r||f==-1)
      		printf("\nQUEUE IS EMPTY, NO MORE ELEMENTS TO DELETE::");
      else if(f==r)
      {
      		printf("\npoped element=%d",a[f]);
            f=r=-1;
      }
   	else
   		printf("\npoped element =%d",a[f++]);

   	printf("\n\t\t\t\tdo you want to delete more elements::");
   	ans=getche();
   }while (ans=='y');
}
