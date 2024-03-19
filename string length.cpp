#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char st[20];
	printf("Enter the sentence : ");
	gets(st);
	n=strlen(st);
	printf("%d",n);
}
