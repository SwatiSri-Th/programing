#include<stdio.h>
#include<string.h>
int main()
{
 char st1[30],st2[30];
 int i,j;
 printf("Enter the first word :");
 gets(st1);
 printf("Enter the next word : ");
 gets(st2);
 
 for(i=0;st1[i]!='\0';i++)
 for(j=0;st2[j]!='\0';j++,i++)
 {
 	st1[i]=st2[j];
 }
 st1[i]='\0';
 printf("%s",st1);
 return 0;
}
