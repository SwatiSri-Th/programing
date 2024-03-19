#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello\0\world\0";
	printf("%d\n",strlen(str));
	return 0;
}
