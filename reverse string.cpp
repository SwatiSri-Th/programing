#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	printf("Enter a words : ");
	gets(st);
	printf("%s",strrev(st));
}
