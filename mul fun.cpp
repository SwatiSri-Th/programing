#include<stdio.h>
void mul();
int main()
{
	 mul();
}
     void mul()
	{
		int a,b,c=1;
		printf("Enter any two numbers : ");
		scanf("%d %d",&a,&b);
		c=a*b;
		printf("\n mul of two numbers is %d",c);
	
}
