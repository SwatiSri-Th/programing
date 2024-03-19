#include<stdio.h>
#include<string.h>
int main()
{
	char st[80],ch;
	int count=0,i;
	printf("\n Enter the words :\n");
	gets(st);
	for(i=0;i<strlen(st);i++)
	switch(st[i])
	{
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		count++;
		break;
    } 
	printf("\n %d  vowel are present ",count); 
}
