//circular link link

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node
{
	int data;
   struct node *next;
}*start=NULL;

char ans='n';

void ui();
void create();
void display();

void insert();
void insert_begin();
void insert_between();
void insert_end();

void del();
void del_begin();
void del_between();
void del_end();


void main()
{
	int ch;
   printf("\n\t\t\t\t::CIRCULAR LINK LIST:: \t\tcreated by MOHD UMAIR\n");
	create();
   display();
   do
   {
   	ui();
   	scanf("%d",&ch);
   	switch(ch)
   	{
			case 1: insert();
   		break;

      	case 2: del();
      	break;
   	}
   printf("\nwanna go to MAIN MENU::");
   ans=getche();
   }while(ans=='y');
   getch();
}

void ui()
{
	printf("\n\n\n\t\t\t\t\t::CIRCULAR LINK LIST MENU::");
   printf("\n\t\t\t\t1. for insertion:");
   printf("\n\t\t\t\t2. for deletion::");
   printf("\n\t\t\t\tans::");
}

void create()
{
	struct node *newnode,*temp;
   do
   {
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("\nenter element into circular linklist::");
      scanf("%d",&newnode->data);

      if(start==NULL)
      	{
         start=temp=newnode;
         newnode->next=start;
         }
      else
      {
      	temp->next=newnode;
      	newnode->next=start;
         temp=temp->next;
      }

   	printf("\t\t\t\t\t\tWANNA CREATE MORE NODES ON CIRCULAR LINK LIST::");
   	ans=getche();
   }while(ans=='y');
}


void display()
{
	struct node *temp;
   temp=start;
   printf("\n\n\t\t\t\t:::RESULTANT CIRCULAR LINK LIST:::");
	do
   {
   	printf("\n\t\t\t\t\tDATA::%d,NEXT::%d",temp->data,temp->next);
   	temp=temp->next;
   }while(temp!=start);
}


void insert()
{
	int s;
   do
   {
   clrscr();
	printf("\n\t\t\t\t::INSERTION MENU::");
   printf("\n\t\t\t\t1.for insertion at begin");
   printf("\n\t\t\t\t2.for insertion at between");
   printf("\n\t\t\t\t3.for insertion at end");
   printf("\n\t\t\t\tans::");
   scanf("%d",&s);

   switch(s)
   {
   	case 1: insert_begin();
      break;

      case 2: insert_between();
      break;

      case 3: insert_end();
      break;
   }
   clrscr();
   display();
   printf("\nWANNA GO TO INSERT MENU::");
   ans=getche();
   }while (ans=='y');
}

void insert_begin()
{
	struct node *newnode,*temp;
   do
   {
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("\nenter data in newnode::");
   scanf("%d",&newnode->data);
   temp=start;


	while(temp->next!=start)
   	temp=temp->next;

   temp->next=newnode;
   newnode->next=start;
   start=newnode;

   printf("\nWANNA INSERT MORE NODES AT THE BEGINNING::");
   ans=getche();
   }while(ans=='y');
   clrscr();
   display();
}

void insert_between()
{
	struct node *temp,*newnode;
   int pos,i=1;

	do
   {
   	temp=start;
   	printf("\n\t\t::ENTER NODE IN BETWEEN::\nenter position::");
   	scanf("%d",&pos);

   	while(i!=pos-1)
   	{
   		temp=temp->next;
   		i++;
		}

   	newnode=(struct node*)malloc(sizeof(struct node));
   	printf("\nenter data in newnode::");
   	scanf("%d",&newnode->data);

   	newnode->next=temp->next;
   	temp->next=newnode;

   	printf("\NWANNA INSERT MORE NODES AT BETWEEN::");
   	ans=getche();
   }while (ans=='y');

   clrscr();
   display();
}


void insert_end()
{
	struct node *temp,*newnode;
   do
   {
   temp=start;

   while(temp->next!=start)
			temp=temp->next;

   newnode=(struct node *)malloc(sizeof(struct node));
   printf("\nenter data in newnode::");
   scanf("%d",&newnode->data);

   temp->next=newnode;
   newnode->next=start;

   printf("\nWANNA INSERT MORE NODE AT THE END::");
   ans=getche();
   }while (ans=='y');
   clrscr();
   display();
}


void del()
{
	int s;
   clrscr();
   do
   {
		printf("\n\t\t\t\t::DELETION MENU::");
   	printf("\n\t\t\t\t1.for deletion in begin");
   	printf("\n\t\t\t\t2.for deletion from between");
   	printf("\n\t\t\t\t3.for deletion at end");
   	printf("\n\t\t\t\tans::");
   	scanf("%d",&s);

   	switch(s)
   	{
   		case 1: del_begin();
      	break;

      	case 2: del_between();
      	break;

      	case 3: del_end();
      	break;
   	}
   printf("\nWANNA GO TO MAIN MEMORY::");
   ans=getche();
   }while(ans=='y');
}


void del_begin()
{
	struct node *temp,*temp1;
	do
   {
   struct node *temp;
   temp=temp1=start;

   while(temp->next!=start)
   	temp=temp->next;

   start=start->next;
   temp->next=start;
   printf("\nDELETED NODE:\ndata=%d,next=%d",temp1->data,temp1->next);
   free(temp1);

   printf("\nWANNA DELETE MORE NODES FROM THE BEGINNING");
	ans=getche();
	}while(ans=='y');
   clrscr();
   display();
}

void del_between()
{
	struct node *temp,*temp1;
   int pos,i=1;
   do
   {
   printf("\nenter position to delelte node");
   scanf("%d",&pos);

   temp=start;

   while(i!=pos-1)
   	temp=temp->next;

   temp->next=temp1;
   temp->next=temp1->next;
   printf("\nDELETED NODE:\ndata=%d,next=%d",temp1->data,temp1->next);
   free(temp1);

   printf("\nWANNA DELETE MORE NODE FROM BETWEEN:");
	ans=getche();
   }while(ans=='y');
   clrscr();
   display();
}

void del_end()
{
   struct node *temp,*temp1;
	do
   {
   temp=start;

   while(temp->next!=start)
   	temp=temp->next;

   temp->next=temp1;
   temp->next=start;

   printf("\nDELETED NODE:\ndata=%d,next=%d",temp1->data,temp1->next);
   free(temp1);

   printf("\nWANNA DELETE MORE NODE FROM THE END:");
   ans=getche();
   }while (ans=='y');
   clrscr();
   display();
}
