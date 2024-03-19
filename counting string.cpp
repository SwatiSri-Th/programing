#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,count=0,p;
	char st[20];
	printf("Enter the words : ");
	gets(st);
	printf("select the letter : ");
	scanf("%c",&n);
	p=strlen(st);
	for(i=0;i<p;i++)
	if(st[i]==n)
	{
		count++;
	}
	printf("%d",count);
}
