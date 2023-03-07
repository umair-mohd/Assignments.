/*Write a user defined function * strcmp (char * t1, char * t2) which compares
two strings t1 and t2.Do not use library functions.*/


#include <stdio.h>
#include <conio.h>
#include <string.h>

   int *strcmp1(char *t1,char *t2)
   {
   	int k=0;
      while (*t1!='\0'||*t2!='\0')    //check every char of string
      {
      	if(*t1==*t2)
         	{k=0;}
         else
         	{k=1;}

         t1++;
         t2++;
      }
      return k;
   }

void main()
{
   char s1[30],s2[30];
   int f=0;
   clrscr();
   printf("\nenter the string:");
   getskh (s1);
   printf("\nenter second string:");
   gets(s2);

   f=strcmp1(s1,s2);   //'&' not requeired

   if(f==0)
   	printf("\nstrings are same:");
   else
   	printf("\nstring are different:");

	getch();
}
