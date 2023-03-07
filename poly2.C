#include<stdio.h>
#include<conio.h>

int m,n,i,j,a[10],b[10],c[10];

void initpoly()
{
 for(i=1;i<=10;i++)
 {
	a[i]=b[i]=c[i]=0;
 }
}

void polyadd()
{
	int r=0;

  if(m<n)
  		r=n;
  else
  		r=m;

  printf("\n\n Additioin Of Poly Is :: ");

  for(i=r;i>=0;i--);
  {
    printf("%d",a[i]+b[i]);

    if(i!=0)
      	printf("x^%d + ",i);
  }

}

void multipoly()
{
	int j;

   printf("\nMultiplication of poly Is :: ");

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
         	printf("x^%d + ",i);
   }
}

void main()
{

   clrscr();

   initpoly();
   
   printf("Enter the Highest Degree of Polynomial 1 :");
   scanf("%d",&m);

   printf("Enter the Highest Degree of Polynomial 1 :");
   scanf("%d",&n);

   printf("\n\t\tEnter Coefficient Of Poly 1 ::");

   for(i=m;i>=0;i--)
   {
      printf("\n\t\tCoeff :: x^%d :: ",i);
      scanf("%d",&a[i]);
   }

   printf("\n\t\tEnter Coefficient Of Poly 2 ::");
   for(i=n;i>=0;i--)
   {
      printf("\n\t\tCoeff :: x^%d :: ",i);
   	scanf("%d",&b[i]);
   }

   polyadd();
   multipoly();
getch();
}
