#include<stdio.h>
int mul(int,int);
int main()
{
	int a,b,c;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	c=mul(a,b);
	printf("\n The multiplication is %d",c);
}
int mul(int a,int b)
{
	return a*b;
}
