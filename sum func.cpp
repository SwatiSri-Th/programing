#include<stdio.h>
void sum();
int main()
{
	sum();
}
  void sum()
{
	int a,b,c=0;
	printf("Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	
	c= a+b;
	printf("\n sum of two number is %d",c);
	
	
}
