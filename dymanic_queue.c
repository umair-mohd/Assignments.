 #include <stdio.h>
 #include <conio.h>
 #include <alloc.h>

 struct node
 {
 	int data;
   struct node *next;
 }*f=NULL,*r=NULL;

 char ans='n';

 void insert();
 void del();
 void display();

 void main()
 {
 	int ch;
   do
   {
 		clrscr();
   	printf("\n\t\t\t\t:::DYNAMIC QUEUE MENU:::");
   	printf("\n\t\t\t\t1.for INSERT.");
   	printf("\n\t\t\t\t2.for delete");
   	printf("\n\t\t\t\tans::");
      scanf("%d",&ch);
      switch(ch)
      {
      	if(ch>0 && ch<4)
      	{
         	case 1:insert();
            break;

            case 2:del();
            break;

            case 3:display();
      	}
      	else
      		printf("\n!!wrong input!!");
      }
      printf("\n\n\t\t\t\t\t\twanna go to MAIN MENU:");
      ans=getche();
   }while(ans=='y');
 	getch();
 }


void insert()
{
	do
   {
   	struct node *newnode;
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("\ninsert elements from REAR::");
      scanf("%d",&newnode->data);
      newnode->next=NULL;

      if(r==NULL)
      {
       	f=r=newnode;
      }
      else
      {
      	r->next=newnode;
         r=newnode;
      }
   	printf("\n\t\t\t\tWANNA INSERT MORE NODES::");
   	ans=getche();
   }while(ans=='y');
}


void del()
{
	struct node *temp;
	do
   {
   	temp=f;
   	if(f->next==NULL)
      	printf("\nNO MORE NODES TO DELETE");
      else
      {
      	f=f->next;
         printf("\n:DELETED ITEM:data=%d,next=%d",f->data,f->next);
         free(temp);
      }

   	printf("\nWANNA DELETE MORE NODE.");
   	ans=getche();
   }while(ans=='y');
   display();
}


void display()
{
	struct node *temp;
	temp=f;
   printf("\n\t\t\t\t\t:::RESULTANT QUEUE:::");
	while(f!=NULL)
   {
   	printf("\n\t\t\t\t\tDATA=%d,NEXT=%d",temp->data,temp->next);
      temp=temp->next;
   }
}
