// DYNAMIC STACK

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node
{
	int data;
   struct node *next;
}*top=NULL;

char ans='n';

void push();
void pop();
void display();

void main()
{
	int ch;
	clrscr();
   do
   {
   	printf("\n\n\n\t\t\t\t\t:::DYNAMIC STACK MENU:::");
   	printf("\n\t\t\t\t\t1.for PUSH");
   	printf("\n\t\t\t\t\t2.for POP");
   	printf("\n\t\t\t\t\t3.for DISPLAY");
   	printf("\n\t\t\t\t\tans::");
		scanf("%d",&ch);

    	if(ch>0 && ch<=3)
   	{
   		switch(ch)
   		{
   			case 1:push();
   			break;

   			case 2:pop();
   			break;

   			case 3:display();
   			break;
   		}
    	}
    	else
    		printf("\n!!wrong input!!");

      printf("\n\ndo you want go to MAIN MENU:::");
      ans=getche();
      clrscr();
      }while(ans=='y');
	getch();
}


void push()
{
	struct node *newnode;
	do
   {
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("\nenter data at TOP :");
      scanf("%d",&newnode->data);

      if(top==NULL)
      {
      	top=newnode;
         newnode->next=NULL;
      }
      else
      {
      	newnode->next=top;
         top=newnode;
      }

   	printf("\n\t\t\t\t\tWANNA PUSH MORE ELEMENTS::");
   	ans=getche();
   }while (ans=='y');
   display();
}


void pop()
{
	struct node *temp;
	do
   {
      if (top==NULL)
      	printf("\no more elements to be POPPED.");
      else
         {
			temp=top;
      	top=top->next;
         printf("\n\n\t\t:::POPPED ELEMENT:::data=%d,next=%d",temp->data,temp->next);
         free(temp);
         }

   	printf("\ndo you want to POP more elements:");
   	ans=getche();
   }while (ans=='y');
   display();
}


void display()
{
	struct node *temp;
   temp=top;
   clrscr();
	printf("\n\t:::RESULTANT DYNAMIC STACK:::");
	while (temp!=NULL)
   {
   	printf("\n\tdata=%d,next=%d",temp->data,temp->next);
      temp=temp->next;
   }
}