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
	
	while(k>0)
	{
		i=k%10;
		j=j*10+i;
		k=k/10;
	}
	return j;
}
