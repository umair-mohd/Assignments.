//polynomial

#include <stdio.h>
#include <conio.h>

void init();
void input();
void add();
void multiply();

int m,n,i;
int a[10],b[10],c[10];

void main()
{
   init();
   input();
   add();
   multiply();
	getch();
}

void init()
{
	for(i=0;i<10;i++)
   {
   	a[i]=b[i]=c[i]=0;
   }
}

void input()
{
	printf("\nenter the highest degree of first equation:");
   scanf("%d",&m);

   printf("\nenter the highest degree of second equation:");
   scanf("%d",&n);

   printf("\nENTER FIRST EQUATION:\N");
   for(i=m;i>=0;i--)
   {
   	printf("\nenter the cofficient of x^%d::",i);
      scanf("%d",&a[i]);
   }
   printf("\nENTER SECOND EQUATION:\N");
   for(i=n;i>=0;i--)
   {
   	printf("\nenter the cofficient of x^%d::",i);
      scanf("%d",&b[i]);
   }
}

void add()
{
 	int r;
	if(m<n)
   	r=n;
   else
   	r=m;

   printf("\n\n:::addition of equation:::\n");
	for(i=r;i>=0;i--)
   {
   	printf("%d",a[i]+b[i]);
      if(i!=0)
      	printf("X^%d + ",i);
   }
}

void multiply()
{
	int j;
	printf("\n\n::product of equation::\n");
	for(i=m;i>=0;i--)
   {
   	for(j=n;j>=0;j--)
      {
      	c[i+j]=c[i+j]+a[i]*b[j];
      }
   }

   for(i=m+n;i>=0;i--)
   {
   	printf("%d",c[i]);
         if(i!=0)
         	printf("X^%d + ",i);
   }
}                              
