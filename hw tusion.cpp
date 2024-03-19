#include<stdio.h>
int main()
{
	
	char x[]="Hi\0Hello";
	printf("%d %d",strlen(x),sizeof(x));
}
