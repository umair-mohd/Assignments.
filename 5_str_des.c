/*Write a program to accept five strings from user
  and display all those strings in
  descending order.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char s[20][20],temp[20];
   int i,j;
   printf("enter any five strings: \n");

   for(i=0;i<5;i++)
   	scanf("%s",s[i]);

   for(i=1;i<5;i++)
   {
   	for(j=1;j<5;j++)
      {
      	//printf("i=%s,j=%s\n",s[j-1],s[j]);

      	if(strcmp(s[j-1],s[j])>0) //
         {
         	//printf("lodu");
         	strcpy(temp,s[j-1]);
            strcpy(s[j-1],s[j]);
            strcpy(s[j],temp);
         }
      }
   }

   printf("\nstring in descending order:\n");
   for(i=5;i>0;i--)
   	printf("\n%s",s[i]);
	getch();
}
