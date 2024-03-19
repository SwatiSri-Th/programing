#include<stdio.h>
int main()
{
	int arr[7],i,n,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum= %d",sum);
}
