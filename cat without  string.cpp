#include<stdio.h>
#include<string.h>
int main()
{
	char st1[30],st2[30],st[30];
	int i,j;
	printf("Enter the first string :");
	gets(st1);
	printf("Enter the second string :");
	gets(st2);
	//loop to copy the first string to resultant string
	i=0,j=0;
	while(st1[i]!='\0')
	{
		st[j]=st1[i];
		i++;
		j++;
	}
	//add a white space before joining the second string
	st[j]=' ';
	j++;
	//loop to join the second string
	i=0;
	while(st2[i]!='\0')
	{
		st[j]=st2[i];
		i++;
		j++;
	 } 
	 st[j]='\0';
	 printf("\n Resultant string is %s",st);
	 return 0;
}
