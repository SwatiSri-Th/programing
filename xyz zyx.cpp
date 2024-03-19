#include<stdio.h>
int rev();
int main()
{
	int result;
	result = rev();
	printf("The reverse is %d",result);
}
int rev()
{
	int i,j=0,k;
	printf("Enter a number : ");
	scanf("%d",&k);
	
	for(i;i>0;i/10)
	{
	  k=i%10;
	  j=k;
	  
	  return j;	
	}
}
