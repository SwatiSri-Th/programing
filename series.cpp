#include<stdio.h>
int main()
{
	int i,j,k,n,sum=0;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			k=k+j;
		}
		sum=sum+k;
	}
	printf("the sum of series  %d = %d",n,sum);
}
