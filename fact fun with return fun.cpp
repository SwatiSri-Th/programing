#include<stdio.h>
int fact();
int main()
{
	int result;
	result = fact();
	printf("Factorial of num is %d",result);
}
int fact()
{
	int i,j,k=1;
	printf("Enter a number : ");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++)
	k=k*i;
	return k;
}
