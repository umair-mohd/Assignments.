// ::::cricular queue::::

#include <stdio.h>
#include <conio.h>
#define  MAX 5

void insert();
void del();
void display();

char ans='n';
int a[MAX],f=-1,r=-1;

void main()
{  int ch;
   do
   {
   clrscr();
   printf("\t\t\t\t\t::ENTER YOU CHOICE::");
   printf("\n\t\t\t\t\t1.for insertion");
   printf("\n\t\t\t\t\t2.for deletion :: "); 
   printf("\n\t\t\t\t\t3.for display :: ");
   scanf("%d",&ch);

   switch(ch)
   {
   	case 1:insert();
      		 break;
   	case 2:del();
      		 break;
      case 3:display();
      		 break;
      default:
      		printf("Error! wrong choice try again :: ");
   }

   printf("\n\n\t Goto main menu :: ");
   ans=getche();
   }while(ans=='y');

   getch();
}

void insert()
{
 	do
   {
   	if(r==f-1 || (f==0 && r==MAX-1))
         printf("\n:cricular queue overflow condition:");

     	else if(f!=0 && r==MAX-1)
      {
      	r=0;
         printf("\nenter element in queue::");
         scanf("%d",&a[r]);
		}

      else
      {
      f=0;
      r++;
      printf("\nenter the element in the qeueue::");
      scanf("%d",&a[r]);
      }

      printf("\n\t\t\t\t\tdo you want to insert more items in queue::");
   	ans=getche();
   }while(ans=='y');
}


void del()
{
	do
   {
   if(f==-1&&r==-1 )
   	printf("\n:queue underflow:");
   else if(f==r)
   	{
      printf("\n\n\t\tdeleted element=%d",a[f]);
      f=r=-1;
      }
   else if(f==MAX-1)
   	{
   	printf("\n\n\t\tdeleted element=%d",a[f]);
      f=0;
      }
   else
   	printf("\n\n\t\tdeleted element=%d",a[f++]);

   printf("\n\t\t\t\t\tdo you want to delete more elements from the circular queue::");
   ans=getche();
   }while(ans=='y');
}
//doubt in display not working 
void display()
{
	int i;
	printf("elements in circular queue=");
   if(r<f)
   {
   	for(i=f; i<r; i--);
   	{
   		printf("%d\t",a[i]);
   	}
   }
   else
   {
   	for(i=f; i<r; i++);
   	{
   		printf("%d\t",a[i]);
   	}
   }

}