#include <stdio.h>
#include <conio.h>
#define MAX 10

char ans='n';
void push();
void pop();

int top=-1,x[MAX];

void main()
{
	push();
   pop();
	getch();
}


void push()
{
	do
   {
	if(top==MAX-1)
   	printf("\n\nstack is full\n");
   else
      {
      printf("\nenter the element in the stack::");
      scanf("%d",&x[top++]);
      }
   printf("\n\t\t\tdo you want to continue::");
   ans=getche();
   }while (ans=='y');
}


void pop()
{
	do
   {
   if(top==-1)
   	printf("\n\nstack is empty");
   else
   	{
       printf("\npoped element=%d",x[top--]);
      }
   printf("\n\t\t\tdo you want to delele more elements::");
   ans=getche();
   }while (ans=='y');
}