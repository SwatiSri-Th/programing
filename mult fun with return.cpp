#include<stdio.h>
int mul();
int main()
{
	int result;
	result=mul();
	printf("The multiplication is %d",result);
}
int mul()
{
	int a,b,c=1;
	printf("\n Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	c=a*b;
	return c;
}
