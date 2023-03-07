//SPARSE MATRIX

#include <stdio.h>
#include <conio.h>

void input();
void create_sparse();
void display();
void add_sparse();
void transpose();

int i,j,k1=0,k2=0,k=0;
int a[3][3],b[3][3],c[10][3],d[10][3],add[20][3];

void main()
{
	input();
	create_sparse();
   add_sparse();
   display();
   transpose();
	getch();
}

void input()
{
	printf("\n\t\t\t\t\t\t:::SPARSE MATRIX:::");

   printf("\nenter 3x3 matrix:");
	printf("\nENTER FIRST MATRIX:\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
      {
      	printf("a[%d][%d]=",i,j);
      	scanf("%d",&a[i][j]);
      }
   }

   printf("\nENTER SECOND MATRIX:\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
      {
      	printf("b[%d][%d]=",i,j);
      	scanf("%d",&b[i][j]);
      }
   }
}



void create_sparse()
{
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
      {
      	if(a[i][j]!=0)
         {
         	k1++;
            c[k1][0]=i;
            c[k1][1]=j;
            c[k1][2]=a[i][j];
			}

         if(b[i][j]!=0)
         {
         	k2++;
            d[k2][0]=i;
            d[k2][1]=j;
            d[k2][2]=b[i][j];
         }
      }
   }

   c[0][0]=3;
   c[0][1]=3;
   c[0][2]=k1;

   d[0][0]=3;
   d[0][1]=3;
   d[0][2]=k2;

}

void add_sparse()
{
   i=1,j=1;  /*if c[][]!=d[][] store smaller value and
   				only increment matrix which transfer its
               value to add matrix.*/
   while (i<=k1 && j<=k2)
   {
   	if(c[i][0]==d[j][0])
      {
      	if( c[i][1]==d[j][1])
         {
         	k++;
            add[k][0]=c[i][0];
         	add[k][1]=c[i][1];
         	add[k][2]=c[i][2]+d[j][2];
            i++;
            j++;
         }
         else if(c[i][1]>d[j][1])
         {
         	k++;
         	add[k][0]=d[j][0];
            add[k][1]=d[j][1];
            add[k][2]=d[j][2];
            j++;
         }
         else
         {
         	k++;
         	add[k][0]=c[i][0];
            add[k][1]=c[i][1];
            add[k][2]=c[i][2];
            i++;
         }
      }

      if(c[i][1]==d[j][1])
      {
      	if( c[i][0]==d[j][0])
         {
         	k++;
            add[k][0]=c[i][0];
         	add[k][1]=c[i][1];
         	add[k][2]=c[i][2]+d[j][2];
            i++;
            j++;
         }
         else if(c[i][0]>d[j][0])
         {
         	k++;
         	add[k][0]=d[j][0];
            add[k][1]=d[j][1];
            add[k][2]=d[j][2];
            j++;
         }
         else
         {
         	k++;
         	add[k][0]=c[i][0];
            add[k][1]=c[i][1];
            add[k][2]=c[i][2];
            i++;
         }
      }
   }

   //runs only,if one of the matrix have not equal rows
   while(j<=k2)
   {
   			k++;
         	add[k][0]=d[j][0];
            add[k][1]=d[j][1];
            add[k][2]=d[j][2];
            j++;
   }

   while(i<=k1)
   {
   			k++;
         	add[k][0]=c[i][0];
            add[k][1]=c[i][1];
            add[k][2]=c[i][2];
            i++;
   }

   add[0][0]=3;
   add[0][1]=3;
   add[0][2]=k;
}


void display()
{
	clrscr();
	printf("\n\nFIRST MATRIX:\n");
	for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
      {
      	printf("%d\t",a[i][j]);
      }
      printf("\n");
   }

   printf("\n\nSECOND MATRIX:\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
      {
   		printf("%d\t",b[i][j]);
      }
      printf("\n");
   }


	printf("\n\nFIRST SPARSE MATRIX:\n");
	for(i=0;i<=k1;i++)
   {
      printf("%d\t%d\t%d\n",c[i][0],c[i][1],c[i][2]);
      if(i==0)
      	printf("==================\n");
   }

   printf("\n\nSECOND SPARSE MATRIX:\n");
   for(i=0;i<=k2;i++)
   {
   	printf("%d\t%d\t%d\n",d[i][0],d[i][1],d[i][2]);
      if(i==0)
      	printf("==================\n");
   }

   printf("\n\t\t\t\t\t:::ADDITION OF SPARSE MATRIX:::\n");
   for(i=0;i<=k;i++)
   {
   	printf("\t\t\t\t\t\t%d\t%d\t%d\n",add[i][0],add[i][1],add[i][2]);
      if(i==0)
      	printf("\t\t\t\t\t\t==================\n");
   }
}




void transpose()
{
	int temp;
   for(i=0;i<=k;i++)
   {
   	temp=add[i][0];
      add[i][0]=add[i][1];
      add[i][1]=temp;
   }

   printf("\n\t\t\t\t\t:::TRANSPOSE OF MATRIX:::\n");
   for(i=0;i<=k;i++)
   {
   	printf("\t\t\t\t\t\t%d\t%d\t%d\n",add[i][0],add[i][1],add[i][2]);
      if(i==0)
      	printf("\t\t\t\t\t\t==================\n");
   }

}

