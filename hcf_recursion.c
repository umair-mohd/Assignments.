/*Write a C program to find the highest common factor using recursion*/
#include <stdio.h>
#include <conio.h>

int findhcf(int, int);

void main()                                                                                                                         
{
	int n1,n2,hcf ;

   printf("enter two number: ");
   scanf("%d %d",&n1,&n2);
   hcf=findhcf(n1,n2);
   printf("H.C.F.of %d and %d::%d",n1,n2,hcf);
   getch();
}

int findhcf(int x,int y)
{
	while(x!=y)
   {
   	if(x>y)
      	return findhcf(x-y,y);
      else
      	return findhcf(x,y-x);
   }
      return x;
}
