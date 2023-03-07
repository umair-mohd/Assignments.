/*Write a Menu driven program for the following using functions
a)	Accept values of size m*n matrices a & b
b)	Calculate product of  a & b
c)	Display Product of matrices
*/

#include <stdio.h>
#include <conio.h>

void input();
void product();
void display();

char ans='n';
int m,n,r,c,i,j;
int a[10][10],b[10][10],d[10][10];

void main()
{
	int ch;
	do
   {
   	printf("\t\t\t\t\t::::MATRIX MENU::::\n");
   	printf("1.for accept values of size m*n matrices:\n");
   	printf("2.calculate product of A and B:\n");
   	printf("3.for display product of matrix:\n");
   	printf("ans::");
		scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:input();
         			product();
      	break;
      	case 2:product();
      	break;
      	case 3:display();
         break;
      }

      	printf("\t\t\t\t\t\ngo to main menu::");
         ans=getche();
   }while (ans=='y');
	getch();
}

void input()
{
	printf("\n::FIRST MATRIX::");
   printf("\nrows: ");
   scanf("%d",&r);
   printf("columns: ");
   scanf("%d",&c);
   printf("\nenter data::\n");

	for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
      {
      	printf("a[%d][%d]=",i,j);
      	scanf("%d",&a[i][j]);
      }
   }

   printf("\n::SECOND MATRIX::");
   printf("\nrows: ");
   scanf("%d",&m);
   printf("columns: ");
   scanf("%d",&n);
   printf("\nenter data::\n");

	for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("b[%d][%d]=",i,j);
      	scanf("%d",&b[i][j]);
      }
   }
}

void product()
{
	int k;

	if(c==m)   // only row of first==column of second
   {
   	for(i=0;i<r;i++) 	   /*take r to traverse 1st matrix rows
      								becoz i is only in 1st matrix*/
   	{
   		for(j=0;j<n;j++)   /*take n to  traverse 2nd matrix column
         							becoz j is only in 2nd matrix*/
      	{
      		d[i][j]=0;
      		for(k=0;k<c;k++)   //take c or m to take order or resultant matrix
         	{
           		d[i][j]=d[i][j]+a[i][k]*b[k][j];
         	}
      	}
   	}
   }
   else
   	printf("\nmatrix unable to multiply::rows and colums mismatch");
}


void display()
{
	clrscr();
   printf("first matrix:\n");
	for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
      {
      	printf("%d\t",a[i][j]);
      }
   	printf("\n");
   }

   printf("\nsecond matrix:\n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%d\t",b[i][j]);
      }
   	printf("\n");
   }

	printf("\nmultiplication of matrix:\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%d\t",d[i][j]);
      }
   	printf("\n");
   }
}
