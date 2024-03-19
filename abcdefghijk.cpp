#include<stdio.h>
int main()
{
	int i,j=0,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
	 i=n%10;
	 j=j*10+i;
	 n=n/10;
	 	
	}
	printf("The reverse number is %d",j);
}
