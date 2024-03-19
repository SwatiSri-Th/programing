#include<stdio.h>
int main()
{
	int i,j=0,n,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			j=i*i;
			sum=sum+j;
		}
	}
	printf("\n sum of squares of first n odd number is %d",sum);
}
