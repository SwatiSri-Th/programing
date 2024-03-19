#include<stdio.h>
int main()
{
	int i,j=0,k;
	printf("Enter a number : ");
	scanf("%d",&i);
	
	while(i>0)
	{
	  k=i%10;
	  j=j+k;
	  i=i/10;	
	}
	printf("Sum of the digits of any integer is %d",j);
}
