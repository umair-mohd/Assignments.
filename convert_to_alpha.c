#include <stdio.h>
#include <conio.h>

int convert(int);              //prototype declaration
void display(int [],int);      //prototype declaration

void main()
{
	int x;
   printf("\t\nenter the number::");
   scanf("%d",&x);
   convert(x);
	getch();
}


int convert(int n)             //function defination
{
	int rem[10],i=0,cnt=0;

   do
   {
   	rem[i]=n%10;             //store in array
   	n/=10;
      i++;                     //increment array index
      cnt++;  						 //count loop iteration
   }while (n!=0);              //recursion in function
   display(rem,cnt);
}


void display(int a[],int cnt)  //function defination
{
   for(int j=cnt-1;j>=0;j--)   //convert number to characters
   {
   	printf("\t");
   	if(a[j]==1)
      	printf("ONE");
      else if (a[j]==2)
      	printf("TWO");
      else if (a[j]==3)
      	printf("THREE");
      else if (a[j]==4)
      	printf("FOUR");
      else if (a[j]==5)
      	printf("FIVE");
   	else if (a[j]==6)
      	printf("SIX");
      else if (a[j]==7)
      	printf("SEVEN");
      else if (a[j]==8)
      	printf("EIGHT");
      else if (a[j]==9)
      	printf("NINE");
      else
      	printf("ZERO");
   }
}
