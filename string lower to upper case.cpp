#include<stdio.h>
#include<string.h>
int main()
{
	char st[30];
	int i=0;
	printf("Enter the string :");
	gets(st);
	
	while(st[i]!='\0')
	{
		if(st[i]>=97 && st[i]<=122)
		{
			st[i]=st[i]-32;
		}
		i++;
	}
	printf("String from lower case to upper case is: %s",st);
	
}
