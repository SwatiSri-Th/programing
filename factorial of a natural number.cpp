#include<stdio.h>
int main()
{
	int i,j=1,k;
	printf("Enter a number : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	j=j*i;
	printf(" %d is the factorial of %d",j,k);
	
}
