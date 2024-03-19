#include<stdio.h>
int main()
{
	int i,j=0,k;
	printf("Enter a value : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		j=j+i;	
	}
	printf("Sum of first %d natural number is %d",k,j);
}
