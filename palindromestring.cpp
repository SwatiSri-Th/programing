#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[30];
	int i,j;
	printf("Enter the word : ");
	gets(s1);
	i=0;
	j=strlen(s1)-1;
	while(j>=0)
	{
		s2[i]=s1[j];
		i++;
		j--;
	}
	s2[i]='\0';
	if(strcmp(s1,s2)==0)
	{
		printf("\n %s is a palindrome string",s1);
	}
	else
	{
		printf("\n %s is not a palindrome",s1);
	}
	return 0;
	
}
