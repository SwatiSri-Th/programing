#include<stdio.h>
int fib(int);
int main()
{

	
		int n,n1=0,n2=1,n3,i;
		printf("Enter the number : ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			n3=n1+n2;
			printf("%d",n3);
			
			n1=n2;
			n2=n3;
		}
	
}
int fib(int n)
{
	if(n==0)
	
	{
		return 0;
	}
	else if(n==1)
	{
		return 1 ;
	}
	else 
	{
		return fib(n-1)+(n-2);
	}
}
