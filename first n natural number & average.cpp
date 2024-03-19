#include<stdio.h>
int main()
{
	int i,j=0,n,average;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j+i;
	}
	average= j/n;
	
	printf("\n sum of first  %d natural number is  %d",n,j);
	printf("\n average of first  %d natural number is %d ",n,average);
}
